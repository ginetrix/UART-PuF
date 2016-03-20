#=================================================================
#
# This Makefile builds FPGA projects, and was generated at
#
#   https://www.boldport.com
#
# on 2011-06-27 19:31:05 UTC (version 0.1.8 2011-06-27)
#
# 'make help' provides a list of possible targets; 'make license'
# prints licensing information (please keep # this header intact);
# 'make check' checks if sources are where expected.
#
# For the project structure this Makefile follows, see
#
#   https://www.boldport.com/docs/fpgaproj
#
#=================================================================

# remove Make's built-in rules
.SUFFIXES:

.PHONY: help license sim-hdl sim-view bbx syn imp bit timing power prog clean-all clean-sim clean-bbx clean-syn clean-imp zip upload check check-d

# environment parameters
DEL_CMD   = rm -rI

# NOTE: due to the way make works, edits to the following flags will
# not cause an automatic rebuild of the target. If you edit these flags,
# don't forget to also delete the existing target or "touch" one of
# the dependencies.

# project parameters
DESIGN       := uart_demo
LANGUAGE     := Verilog
VLG_EXT      := v
VHDL_EXT     := vhd
DUT          := xc6slx9-csg324-2

TOP_PATH     := $(shell pwd)
HDL_PATH     := $(TOP_PATH)
CON_PATH     := $(TOP_PATH)
BLD_PATH     := $(TOP_PATH)/build

# The TOP_FILE is either the top HDL file, or a project file (.prj);
# assumption is that it's placed in the HDL directory.
TOP_FILE     := $(HDL_PATH)/uart_demo.v

CON_FILE     := $(CON_PATH)/mimas_v2.ucf
TOP_MODULE   := uart_demo
XST_FILE     := $(DESIGN).xstbp
SYN_BASE      = -top $(TOP_MODULE) \
                -ifn $(TOP_FILE) \
                -ifmt $(LANGUAGE) \
                -ofn $(DESIGN) \
                -ofmt ngc \
                -p $(DUT)

# build directory names
SYN          := synthesis
IMP          := implement

# source files make will be sensitive to in $(HDL_PATH);
# if all files there are sources, change to *
HDL_SRCS   := $(wildcard $(HDL_PATH)/*.$(VLG_EXT) $(HDL_PATH)/*.$(VHDL_EXT) $(HDL_PATH)/ipcore_dir/*/*.$(VLG_EXT) $(HDL_PATH)/ipcore_dir/*/*.$(VHDL_EXT))

# blackbox targets (empty if none)
BBX_OBJS   :=

SYN_SRCS   := $(BBX_OBJS) $(HDL_SRCS)
SYN_OBJS   := $(BLD_PATH)/$(SYN)/$(DESIGN).ngc
FIT_OBJS   := $(BLD_PATH)/$(IMP)/$(DESIGN).ngd
MAP_OBJS   := $(BLD_PATH)/$(IMP)/$(DESIGN)_map.ncd
PAR_OBJS   := $(BLD_PATH)/$(IMP)/$(DESIGN).ncd
BIN_OBJS   := $(BLD_PATH)/$(IMP)/$(DESIGN).bin
BIT_OBJS   := $(BLD_PATH)/$(IMP)/$(DESIGN).bit
TIM_OBJS   := $(BLD_PATH)/$(IMP)/$(DESIGN).twr
PWR_OBJS   := $(BLD_PATH)/$(IMP)/$(DESIGN).pwr
PROG_SRCS  := $(BLD_PATH)/$(IMP)/bp-impact.cmd

# Flow options
MAP_OPT :=
BIN_OPT := -g Binary:yes
BIT_OPT := -w
PAR_OPT :=
SYN_OPT := -opt_mode speed
TIM_OPT := -e 10
PWR_OPT := -l 10

# Tools can run in different contextual/verbosity modes:
# standalone (empty string) or "-intstyle ise|xflow|silent"
MODE  :=

#-----------------------------------------
# information
#-----------------------------------------

# Target 'help'     : display this help message
help:
	@echo ""
	@echo "This Makefile was auto-generated by http://boldport.com"
	@echo "For license see end or run 'make license'"
	@echo ""
	@echo "For support visit http://boldport.com/forum or email team@boldport.com"
	@echo ""
	@echo "Common uses:"
	@echo "------------"
	@echo "To create a bitstream, type 'make bit'"
	@echo "To create a placelist (.ncd) and upload to boldport, type 'make boldport'"
	@echo "To clean the entire project, type 'make clean-all'"
	@echo ""
	@echo "Additionally, the following targets are possible:"
	@echo "-------------------------------------------------"
	@echo ""
	@grep "^# Target " $(lastword $(MAKEFILE_LIST)) | cut -c10-
	@echo

# Target 'license'  : license and disclaimer
license:
	@echo ""
	@echo "This Software is licenced under the \"MIT License\":"
	@echo ""
	@echo "Copyright (C) 2011 by boldport.com"
	@echo ""
	@echo "Permission is hereby granted, free of charge, to any person obtaining a copy"
	@echo "of this software and associated documentation files (the \"Software\"), to deal"
	@echo "in the Software without restriction, including without limitation the rights"
	@echo "to use, copy, modify, merge, publish, distribute, sublicense, and/or sell"
	@echo "copies of the Software, and to permit persons to whom the Software is"
	@echo "furnished to do so, subject to the following conditions:"
	@echo ""
	@echo "The above copyright notice and this permission notice shall be included in"
	@echo "all copies or substantial portions of the Software."
	@echo ""
	@echo "THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR"
	@echo "IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,"
	@echo "FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE"
	@echo "AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER"
	@echo "LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,"
	@echo "OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN"
	@echo "THE SOFTWARE."
	@echo ""

#-----------------------------------------
# build targets
#-----------------------------------------

# Target 'syn'      : synthesis netlist (xst .ngc)
syn: $(SYN_OBJS)

# Target 'imp'      : implementation (ngdbuild .ngd, map _map.ncd, par .ncd)
imp: $(FIT_OBJS) $(MAP_OBJS) $(PAR_OBJS)

# Target 'bin'      : binary (bitgen .bin)
bin: $(BIN_OBJS)

# Target 'bit'      : bitstream (bitgen .bit)
bit: $(BIT_OBJS)

# Target 'timing'   : timing analysis (trce .twr)
timing: $(TWR_OBJS)

# Target 'power'    : power analysis (xpwr .pwr)
power: $(PWR_OBJS)

# Target 'prog'     : program the FPGA (iMPACT .cmd)
prog: $(BIT_OBJS) $(PROG_SRCS)
	@echo "-- Launcing iMPACT"
	impact -batch $(PROG_SRCS)

#-----------------------------------------
# cleaning targets
#-----------------------------------------

# Target 'clean-all': clean the entire build
clean-all:
	$(DEL_CMD) $(BLD_PATH)

# Target 'clean-syn': clean synthesis build dir, but not blackbox dir
clean-syn:
	cd $(BLD_PATH)/$(SYN) && $(DEL_CMD) $(shell ls $(BLD_PATH)/$(SYN)* | grep -v $(BBX))

# Target 'clean-imp': clean implementation build directory
clean-imp:
	$(DEL_CMD) $(BLD_PATH)/$(IMP)

# Target 'zip'      : archive report files (zip .zip)
zip:
	@echo "-- This target is generated only when you're logged in at boldport.com and have a project open."

# Target 'upload'   : upload archive to your boldport.com account
upload:
	@echo "-- This target is generated only when you're logged in at boldport.com and have a project open."

#-----------------------------------------
# recipes
#-----------------------------------------

# synthesis: generate netlist
%.ngc: $(SYN_SRCS)
	mkdir -p $(@D)
	cd $(@D) && echo "run" > $(XST_FILE)
	cd $(@D) && echo $(SYN_BASE) | sed 's/\(-[a-z0-9_]* [//\.a-zA-Z0-9_-]*\) /\1\n/g' >> $(XST_FILE)
	cd $(@D) && echo $(SYN_OPT) | sed 's/\(-[a-z0-9_]* [a-z0-9_]*\) /\1\n/g' >> $(XST_FILE)
	cd $(@D) && xst $(MODE) -ifn $(@D)/$(XST_FILE)
	@if test ! -f $(SYN_OBJS); then exit 2; fi

# ngdbuild: convert netlist to Xilinx format
%.ngd: $(SYN_OBJS) $(CON_FILE)
	mkdir -p $(@D)
	cd $(@D) && \
	ngdbuild $(MODE) $< -p $(DUT) -uc $(CON_FILE)

# map: place/route design
%_map.ncd %.pcf: %.ngd
	cd $(@D) && \
	map $(MODE) -w $*.ngd -p $(DUT) -o $*_map.ncd $*.pcf $(MAP_OPT)

# par: route design
%.ncd: %_map.ncd %.pcf
	cd $(@D) && \
	par $(MODE) -w $*_map.ncd $*.ncd $*.pcf $(PAR_OPT)

# bitgen: generate binary
%.bin: %.ncd
	cd $(@D) && \
	bitgen $(MODE) $< $(BIN_OPT)

# bitgen: generate bitstream
%.bit: %.ncd
	cd $(@D) && \
	bitgen $(MODE) $< $(BIT_OPT)

# trce: timing analysis
%.twr: %.ncd %.pcf
	cd $(@D) && \
	trce $(MODE) $*.ncd $*.pcf -xml $*.twx -o $*.twr $(TIM_OPT)

# xpwr: power analysis
%.pwr: %.ncd %.pcf
	cd $(@D) && \
	xpwr $(MODE) $*.ncd $*.pcf -o $*.pwr $(PWR_OPT)

# impact: command file (programs first device on chain)
%.cmd:
	cd $(@D) && echo "setMode -bscan" > $@
	cd $(@D) && echo "setCable -p usb21" >> $@
	cd $(@D) && echo "identify" >> $@
	cd $(@D) && echo "assignFile -p 1 -file $(DESIGN).bit" >> $@
	cd $(@D) && echo "program -p 1" >> $@
	cd $(@D) && echo "closeCable" >> $@
	cd $(@D) && echo "quit"  >> $@

# Target 'check'    : pre-flow source files existence check
check:
	@echo ""
	@echo "This routine checks that sources are where they should be; run it while"
	@echo "when setting up or making changes to the project."
	@echo ""
ifndef XILINX
	@echo "NOTE: The XILINX environment variable is not set. This could mean that"
	@echo "the tools aren't installed, or that they haven't been sourced. Look for"
	@echo "setting32.sh or settings64.sh in your installation directory and run"
	@echo ""
	@echo "  source /path/to/install/settings32.sh"
	@echo ""
endif
	@echo "-- Making sure everything is where it should be before starting..."
	@if test -f $(TOP_FILE); then echo " * found $(TOP_FILE)"; \
	else echo "ERROR: Can't locate $(TOP_FILE)"; exit 2; fi
	@if test -f $(CON_FILE); then echo " * found $(CON_FILE)"; \
	else echo "ERROR: Can't locate $(CON_FILE)"; exit 2; fi
	@echo "-- Done. Everything seems to be in order."
	@echo ""

# Target 'check-d'  : post-flow generated files existence check
check-d:
	@echo "-- Testing to see if files were generated correctly..."
	@if test -f $(SYN_OBJS); then echo " * found $(SYN_OBJS)"; \
	else echo "ERROR: Can't locate $(SYN_OBJS)"; exit 2; fi
	@if test -f $(PAR_OBJS); then echo " * found $(PAR_OBJS)"; \
	else echo "ERROR: Can't locate $(PAR_OBJS)"; exit 2; fi
	@if test -f $(BIN_OBJS); then echo " * found $(BIN_OBJS)"; \
	else echo "ERROR: Can't locate $(BIN_OBJS)"; exit 2; fi
	@if test -f $(BIT_OBJS); then echo " * found $(BIT_OBJS)"; \
	else echo "ERROR: Can't locate $(BIT_OBJS)"; exit 2; fi
	@echo "-- Done. Found generated files."