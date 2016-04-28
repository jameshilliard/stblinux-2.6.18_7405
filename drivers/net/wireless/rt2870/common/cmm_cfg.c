/*
 *************************************************************************
 * Ralink Tech Inc.
 * 5F., No.36, Taiyuan St., Jhubei City,
 * Hsinchu County 302,
 * Taiwan, R.O.C.
 *
 * (c) Copyright 2002-2007, Ralink Technology, Inc.
 *
 * This program is free software; you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation; either version 2 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program; if not, write to the                         *
 * Free Software Foundation, Inc.,                                       *
 * 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                       *
 *************************************************************************

    Module Name:
 cmm_cfg.c

    Abstract:
    Ralink WiFi Driver configuration related subroutines

    Revision History:
    Who          When          What
    ---------    ----------    ----------------------------------------------
*/



#include "rt_config.h"



INT ComputeChecksum(
    IN UINT PIN)
{
    INT digit_s;
    UINT accum = 0;

    PIN *= 10;
    accum += 3 * ((PIN / 10000000) % 10);
    accum += 1 * ((PIN / 1000000) % 10);
    accum += 3 * ((PIN / 100000) % 10);
    accum += 1 * ((PIN / 10000) % 10);
    accum += 3 * ((PIN / 1000) % 10);
    accum += 1 * ((PIN / 100) % 10);
    accum += 3 * ((PIN / 10) % 10);

    digit_s = (accum % 10);
    return ((10 - digit_s) % 10);
} // ComputeChecksum

UINT GenerateWpsPinCode(
    IN PRTMP_ADAPTER pAd,
    IN  BOOLEAN         bFromApcli,
    IN UCHAR   apidx)
{
    UCHAR macAddr[MAC_ADDR_LEN];
    UINT  iPin;
    UINT checksum;

#ifdef CONFIG_STA_SUPPORT
    IF_DEV_CONFIG_OPMODE_ON_STA(pAd)
    NdisMoveMemory(&macAddr[0], pAd->CurrentAddress, MAC_ADDR_LEN);
#endif // CONFIG_STA_SUPPORT //

    iPin = macAddr[3] * 256 * 256 + macAddr[4] * 256 + macAddr[5];

    iPin = iPin % 10000000;
    checksum = ComputeChecksum(iPin);
    iPin = iPin * 10 + checksum;

    return iPin;
}

char* GetPhyMode(
    int Mode)
{
    switch (Mode)
    {
        case MODE_CCK:
            return "CCK";

        case MODE_OFDM:
            return "OFDM";
#ifdef DOT11_N_SUPPORT
        case MODE_HTMIX:
            return "HTMIX";

        case MODE_HTGREENFIELD:
            return "GREEN";
#endif // DOT11_N_SUPPORT //
        default:
            return "N/A";
    }
}


char* GetBW(
    int BW)
{
    switch (BW)
    {
        case BW_10:
            return "10M";

        case BW_20:
            return "20M";
#ifdef DOT11_N_SUPPORT
        case BW_40:
            return "40M";
#endif // DOT11_N_SUPPORT //
        default:
            return "N/A";
    }
}


/*
    ==========================================================================
    Description:
        Set Country Region to pAd->CommonCfg.CountryRegion.
        This command will not work, if the field of CountryRegion in eeprom is programmed.

    Return:
        TRUE if all parameters are OK, FALSE otherwise
    ==========================================================================
*/
INT RT_CfgSetCountryRegion(
    IN PRTMP_ADAPTER pAd,
    IN PSTRING   arg,
    IN INT    band)
{
    LONG region;
    UCHAR *pCountryRegion;

    region = simple_strtol(arg, 0, 10);

    if (band == BAND_24G)
        pCountryRegion = &pAd->CommonCfg.CountryRegion;
    else
        pCountryRegion = &pAd->CommonCfg.CountryRegionForABand;

    // TODO: Is it neccesay for following check???
    // Country can be set only when EEPROM not programmed
    if (*pCountryRegion & 0x80)
    {
        DBGPRINT(RT_DEBUG_ERROR, ("CfgSetCountryRegion():CountryRegion in eeprom was programmed\n"));
        return FALSE;
    }

    if ((region >= 0) &&
            (((band == BAND_24G) && ((region <= REGION_MAXIMUM_BG_BAND) || (region == REGION_31_BG_BAND))) ||
             ((band == BAND_5G) && (region <= REGION_MAXIMUM_A_BAND)))
       )
    {
        *pCountryRegion = (UCHAR) region;
    }
    else
    {
        DBGPRINT(RT_DEBUG_ERROR, ("CfgSetCountryRegion():region(%ld) out of range!\n", region));
        return FALSE;
    }

    return TRUE;

}


/*
    ==========================================================================
    Description:
        Set Wireless Mode
    Return:
        TRUE if all parameters are OK, FALSE otherwise
    ==========================================================================
*/
INT RT_CfgSetWirelessMode(
    IN PRTMP_ADAPTER pAd,
    IN PSTRING   arg)
{
    INT  MaxPhyMode = PHY_11G;
    LONG WirelessMode;

#ifdef DOT11_N_SUPPORT
    if (!RTMP_TEST_MORE_FLAG(pAd, fRTMP_ADAPTER_DISABLE_DOT_11N))
        MaxPhyMode = PHY_11N_5G;
#endif // DOT11_N_SUPPORT //

    WirelessMode = simple_strtol(arg, 0, 10);

    /* check if chip support 5G band when WirelessMode is 5G band */
    if (PHY_MODE_IS_5G_BAND(WirelessMode))
    {
        if (!RFIC_IS_5G_BAND(pAd))
        {
            DBGPRINT(RT_DEBUG_ERROR,
                     ("phy mode> Error! The chip does not support 5G band %d!\n",
                      pAd->RfIcType));
            return FALSE;
        }
    }

    if (WirelessMode <= MaxPhyMode)
    {
        pAd->CommonCfg.PhyMode = WirelessMode;
        pAd->CommonCfg.DesiredPhyMode = WirelessMode;
        return TRUE;
    }

    return FALSE;

}


INT RT_CfgSetShortSlot(
    IN PRTMP_ADAPTER pAd,
    IN PSTRING   arg)
{
    LONG ShortSlot;

    ShortSlot = simple_strtol(arg, 0, 10);

    if (ShortSlot == 1)
        pAd->CommonCfg.bUseShortSlotTime = TRUE;
    else if (ShortSlot == 0)
        pAd->CommonCfg.bUseShortSlotTime = FALSE;
    else
        return FALSE;  //Invalid argument

    return TRUE;
}


/*
    ==========================================================================
    Description:
        Set WEP KEY base on KeyIdx
    Return:
        TRUE if all parameters are OK, FALSE otherwise
    ==========================================================================
*/
INT RT_CfgSetWepKey(
    IN PRTMP_ADAPTER pAd,
    IN PSTRING   keyString,
    IN CIPHER_KEY  *pSharedKey,
    IN INT    keyIdx)
{
    INT    KeyLen;
    INT    i;
    //UCHAR   CipherAlg = CIPHER_NONE;
    BOOLEAN   bKeyIsHex = FALSE;

    // TODO: Shall we do memset for the original key info??
    memset(pSharedKey, 0, sizeof(CIPHER_KEY));
    KeyLen = strlen(keyString);
    switch (KeyLen)
    {
        case 5: //wep 40 Ascii type
        case 13: //wep 104 Ascii type
            bKeyIsHex = FALSE;
            pSharedKey->KeyLen = KeyLen;
            NdisMoveMemory(pSharedKey->Key, keyString, KeyLen);
            break;

        case 10: //wep 40 Hex type
        case 26: //wep 104 Hex type
            for (i = 0; i < KeyLen; i++)
            {
                if (!isxdigit(*(keyString + i)))
                    return FALSE;  //Not Hex value;
            }
            bKeyIsHex = TRUE;
            pSharedKey->KeyLen = KeyLen / 2 ;
            AtoH(keyString, pSharedKey->Key, pSharedKey->KeyLen);
            break;

        default: //Invalid argument
            DBGPRINT(RT_DEBUG_TRACE, ("RT_CfgSetWepKey(keyIdx=%d):Invalid argument (arg=%s)\n", keyIdx, keyString));
            return FALSE;
    }

    pSharedKey->CipherAlg = ((KeyLen % 5) ? CIPHER_WEP128 : CIPHER_WEP64);
    DBGPRINT(RT_DEBUG_TRACE, ("RT_CfgSetWepKey:(KeyIdx=%d,type=%s, Alg=%s)\n",
                              keyIdx, (bKeyIsHex == FALSE ? "Ascii" : "Hex"), CipherName[pSharedKey->CipherAlg]));

    return TRUE;
}


/*
    ==========================================================================
    Description:
        Set WPA PSK key

    Arguments:
        pAdapter Pointer to our adapter
        keyString WPA pre-shared key string
        pHashStr String used for password hash function
        hashStrLen Lenght of the hash string
        pPMKBuf  Output buffer of WPAPSK key

    Return:
        TRUE if all parameters are OK, FALSE otherwise
    ==========================================================================
*/
INT RT_CfgSetWPAPSKKey(
    IN RTMP_ADAPTER *pAd,
    IN PSTRING  keyString,
    IN UCHAR  *pHashStr,
    IN INT   hashStrLen,
    OUT PUCHAR  pPMKBuf)
{
    int keyLen;
    UCHAR keyMaterial[40];

    keyLen = strlen(keyString);
    if ((keyLen < 8) || (keyLen > 64))
    {
        DBGPRINT(RT_DEBUG_TRACE, ("WPAPSK Key length(%d) error, required 8 ~ 64 characters!(keyStr=%s)\n",
                                  keyLen, keyString));
        return FALSE;
    }

    memset(pPMKBuf, 0, 32);
    if (keyLen == 64)
    {
        AtoH(keyString, pPMKBuf, 32);
    }
    else
    {
        RtmpPasswordHash(keyString, pHashStr, hashStrLen, keyMaterial);
        NdisMoveMemory(pPMKBuf, keyMaterial, 32);
    }

    return TRUE;
}

INT RT_CfgSetFixedTxPhyMode(
    IN PSTRING   arg)
{
    INT  fix_tx_mode = FIXED_TXMODE_HT;
    UINT32 value;

    if (strcmp(arg, "OFDM") == 0 || strcmp(arg, "ofdm") == 0)
    {
        fix_tx_mode = FIXED_TXMODE_OFDM;
    }
    else if (strcmp(arg, "CCK") == 0 || strcmp(arg, "cck") == 0)
    {
        fix_tx_mode = FIXED_TXMODE_CCK;
    }
    else if (strcmp(arg, "HT") == 0 || strcmp(arg, "ht") == 0)
    {
        fix_tx_mode = FIXED_TXMODE_HT;
    }
    else
    {
        value = simple_strtol(arg, 0, 10);
        // 1 : CCK
        // 2 : OFDM
        // otherwise : HT
        if (value == FIXED_TXMODE_CCK || value == FIXED_TXMODE_OFDM)
            fix_tx_mode = value;
        else
            fix_tx_mode = FIXED_TXMODE_HT;
    }

    return fix_tx_mode;

}

INT RT_CfgSetMacAddress(
    IN  PRTMP_ADAPTER  pAd,
    IN PSTRING   arg)
{
    INT i, mac_len;

    /* Mac address acceptable format 01:02:03:04:05:06 length 17 */
    mac_len = strlen(arg);
    if (mac_len != 17)
    {
        DBGPRINT(RT_DEBUG_ERROR, ("%s : invalid length (%d)\n", __FUNCTION__, mac_len));
        return FALSE;
    }

    if (strcmp(arg, "00:00:00:00:00:00") == 0)
    {
        DBGPRINT(RT_DEBUG_ERROR, ("%s : invalid mac setting \n", __FUNCTION__));
        return FALSE;
    }

    for (i = 0; i < MAC_ADDR_LEN; i++)
    {
        AtoH(arg, &pAd->CurrentAddress[i], 1);
        arg = arg + 3;
    }

    pAd->bLocalAdminMAC = TRUE;
    return TRUE;
}

INT RT_CfgSetTxMCSProc(
    IN PSTRING   arg,
    OUT BOOLEAN   *pAutoRate)
{
    INT Value = simple_strtol(arg, 0, 10);
    INT TxMcs;

    if ((Value >= 0 && Value <= 23) || (Value == 32)) // 3*3
    {
        TxMcs = Value;
        *pAutoRate = FALSE;
    }
    else
    {
        TxMcs = MCS_AUTO;
        *pAutoRate = TRUE;
    }

    return TxMcs;

}

INT RT_CfgSetAutoFallBack(
    IN  PRTMP_ADAPTER  pAd,
    IN PSTRING   arg)
{
    TX_RTY_CFG_STRUC tx_rty_cfg;
    UCHAR    AutoFallBack = (UCHAR)simple_strtol(arg, 0, 10);

    RTMP_IO_READ32(pAd, TX_RTY_CFG, &tx_rty_cfg.word);
    tx_rty_cfg.field.TxautoFBEnable = (AutoFallBack) ? 1 : 0;
    RTMP_IO_WRITE32(pAd, TX_RTY_CFG, tx_rty_cfg.word);
    DBGPRINT(RT_DEBUG_TRACE, ("RT_CfgSetAutoFallBack::(tx_rty_cfg=0x%x)\n", tx_rty_cfg.word));
    return TRUE;
}

