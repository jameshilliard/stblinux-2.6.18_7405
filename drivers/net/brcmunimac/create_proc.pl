#!/usr/bin/perl

#This script is used to generate the proc entry C source file, the input is 
#unimac_defs.h and unimac_map.h

if ($#ARGV+1 != 3)
{
	print "usage: create_proc.pl  unimac_defs.h unimac_maps.h o_name\n";
	print "\twhere: unimac_defs.h  is the register bit macro definition\n";
	print "\tunimac_maps.h is the register data structure definition \n";
	print "\to_name is the output file name \n";
	exit -1;
}

$defines = $ARGV[0];
$regs = $ARGV[1];
$output = $ARGV[2];

#open and read in macro definition file
open(DEFINES, $defines);
@macro_lines = <DEFINES>;
close(DEFINES);
#open and read in register structure file 
open(REGS, $regs);
@reglines = <REGS>;
close(REGS);

#open output file for writing
open(O_SOURCE, ">$output");
print O_SOURCE "/* Copyright (c) 2002-2008 Broadcom Corporation 
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
*/\n";
print O_SOURCE "/* \n";
print O_SOURCE " * WARNING: THIS FILE IS AUTOMATICALLY GENERATED BY SCRIPT,\n";
print O_SOURCE " * DON'T MODIFY IT DIRECTLY,UNLESS YOU KNOW WHAT YOU ARE DOING!\n ";
#get time
($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst)=localtime(time);
$year += 1900;
print O_SOURCE " * Generated on : $mon\/$mday\/$year-$hour:$min:$sec\n";
print O_SOURCE " */\n\n";
print O_SOURCE "#include <linux/stat.h>\n";
print O_SOURCE "#include \"unimac_proc.h\"\n";
print O_SOURCE "\n";
print O_SOURCE "umacProcEntry umac_proc_entries[] = {\n";

$reg_count = 0;

#processing unimac register group
$offset = 0;
process_group("uniMacRegs", $offset, "PROC_GROUP_UMAC");
$offset = 0;
undef($hierarchy_group);
process_group("rbufRegs", $offset, "PROC_GROUP_RBUF");
$offset = 0;
undef($hierarchy_group);
process_group("intrl2Regs", $offset, "PROC_GROUP_INTRL2");
$offset = 0;
undef($hierarchy_group);
process_group("epllRegs", $offset, "PROC_GROUP_EPLL");
$offset = 0;
undef($hierarchy_group);
process_group("DmaRegs", $offset, "PROC_GROUP_ISDMA");

#finally, print a "};"
print O_SOURCE "};\n";

#Fill in the array count.
$o_lines = <O_SOURCE>;
$o_lines =~ s/umac_proc_entries\[\]/umac_proc_entries\[$reg_count\]/;

close(O_SOURCE);
print "Generated proc source file in $output, Total regs=$reg_count Done!\n";


#process register group 
sub process_group
{
	local($type_name, $offset, $i);
	$type_name = @_[0];
	$offset = @_[1];
	$group_id = @_[2];

	#add one level  hierarchy name if called recursively
	if (defined $hierarchy_group) {
		$hierarchy_group = "$hierarchy_group\/$type_name";
	}else {
		$hierarchy_group = $type_name;
	}
	print "processing $type_name ...\n";
	for ($i = 0; $i < scalar(@reglines); $i++)
	{
		#search data structure definition "typedef struct $type_name"
		if(@reglines[$i] =~ /typedef\s*struct\s*$type_name/)
		{
			print "match $type_name";
			$i += 1;
			while(@reglines[$i] !~ /$type_name/)
			{
				if (@reglines[$i] =~ /^$/ || 
					@reglines[$i] =~ /{\s*/ ||
					@reglines[$i] =~ /^\s*\/\*/) 
				{
					goto nextline;
				}
				print "Processing @reglines[$i]";
				if (@reglines[$i] =~ /unused[0-9]*\[(.*)\]/) {
					#looking for "unusedxx[xx]", skip multiple 4 bytes offset
					$offset += $1*4;
				}elsif (@reglines[$i] =~ /unused.*/) {
					#looking for "unusedxx", skip 4 bytes offset
					$offset += 4;
				}elsif (@reglines[$i] =~ /rbuf_rxc_offset\[(.*)\]/){
					print "Processing rbuf_rxc_offset\n";
					#processing rbuf register arrays, this needs seperate function later on!
					for($k=0; $k < $1; $k++)
					{
						#$line = "unsigned long rbuf_rxc_offset[$k]";
						#process_reg($line, $offset, $group_id, $hierarch_group);
						$offset += 4;
					}
					#skip register array for now!
				}elsif (@reglines[$i] =~ /rbuf_fltr_len\[(.*)\]/){
					print "Processing rbuf_fltr_len\n";
					for($k=0; $k < $1; $k++)
					{
						$offset += 4;
					}
					#skip register array for now!.
				}elsif (@reglines[$i] =~ /.*unsigned[\t*\s*]long/){
					#process normal register inside data structure.
					process_reg($reglines[$i], $offset, $group_id, $hierarchy_group);
					$offset += 4;
				}else {
					#process register group(recursive), struct defined inside struct.
					@reglines[$i] =~ /[\t*\s*](.*)[\t*\s*](.*);/ ;
					$sub_type_name=$1;
					#remove leading white space.
					$sub_type_name =~ s/^\s+//;
					print "Processing recursive group...$sub_type_name\n";
					$offset = &process_group($sub_type_name, $offset, $group_id);
				}
nextline:
				$i += 1;
			}
		}
	}
	#remove one level hierarchy when the group is done!
	if(defined $hierarchy_group) {
		$name = $hierarchy_group;
		while($name =~ /\/(.*)/){
			$name = $1;
		}
		$hierarchy_group =~ s/\/$name//;
	}
	return $offset;
	
}
# procssing individual register 
sub process_reg
{
	local($regline, $offset, $group_id, $group_name, $i);
	$regline = @_[0];
	$offset = @_[1];
	$group_id = @_[2];
	$group_name = @_[3];
	
	$regline =~ /unsigned[\s*\t*]long[\s*\t*](.*);/;
	$regname = $1;

	#Decode the bitmask/shift from bit definition files, if any
	for ($i = 0; $i < scalar(@macro_lines); $i++)
	{
		if(@macro_lines[$i] =~ /.*$regname/ && @macro_lines[$i] !~ /.*non-proc.*/)
		{
			$i += 1;
			# register bit will be terminated if it sees next line is "reg: xxx"
			# or "group end" 
			while(@macro_lines[$i] !~ /.*reg:/ && @macro_lines[$i] !~ /.*group/)
			{
				print "Evaluating @macro_lines[$i] ....";
				#Match "MASK" and "SHIFT" keywords, if any.
				if (@macro_lines[$i] =~ /#define\s*(.*)_SHIFT.*/) {
					$entry_name = $1;
					@macro_lines[$i] =~ /.*_SHIFT\s*(.*)[\n\s*]/;
					$shift = $1;
					$shift_str = sprintf("0x%08x", $shift);
					#"SHIFT" should be followed by "MASK" definition.
					$i += 1;
					if(@macro_lines[$i] !~ /#define\s+(.*)_MASK.*/) {
						die("$entry_name SHIFT defined, but no MASK defined");
					}else {
						@macro_lines[$i] =~ /.*_MASK\s*(.*)[\n\s*\/*]/;
						$mask = $1;
						if ($mask =~ /^0x(.*)\s*/) {
							$mask_str = "0x$1";
						}else {
							$mask_str = sprintf("0x%08x", $mask);
						}
						print "mask_str = $mask_str\n";
					}
					print_common($regline, $offset, $group_id);
					print O_SOURCE "$shift_str, $mask_str, \"$group_name\/$regname\/$entry_name\" ";
					print O_SOURCE "},\n";
					$reg_count += 1;
				}elsif(@macro_lines[$i] =~ /#define\s+(.*)\s+\(\s*1\s<<\s(.*)\)/) {
					$shift = $2;
					$entry_name = $1;
					$entry_name =~ s/\s+//;
					$shift_str = sprintf("0x%08x",$shift);
					$mask_str = sprintf("0x%08x",1);
					print_common($regline, $offset, $group_id);
					print O_SOURCE "$shift_str, $mask_str, \"$group_name\/$regname\/$entry_name\" ";
					print O_SOURCE "},\n";
					$reg_count += 1;
				}
					
				$i += 1;
			}
			#finished decoding bitshift/mask
			goto done;
		}
	}
	#no bit defination found, entire register is output as a whole in proc file entry.
	print_common($regline, $offset, $group_id);
	print O_SOURCE "0x00000000, 0xFFFFFFFF, \"$group_name\/$regname\" ";
	print O_SOURCE "},\n";
	$reg_count += 1;
done:
	print "Done processing $regname\n";
	
}

sub print_common
{
	local($regline, $offset, $group_id);
	$regline = @_[0];
	$offset = @_[1];
	$group_id = @_[2];
	print O_SOURCE "\t{0, 0, $group_id, ";
	
	if ($regline =~ /\s*RO\s*/) {
		print O_SOURCE "S_IRUSR|S_IRGRP|S_IROTH, ";
	}elsif ($regline =~ /\s*RW\s*/) {
		print O_SOURCE "S_IWUSR|S_IWGRP|S_IWOTH, ";
	}else {
		print O_SOURCE "S_IRUSR|S_IRGRP|S_IROTH, ";
	}
	$offset_str = sprintf("0x%08x", $offset);
	print O_SOURCE "$offset_str, ";
}


