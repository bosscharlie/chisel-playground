######################################################################
# Check for sanity to avoid later confusion

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

default:
	@echo "-- Start Make --"
	@echo "-- VERILATE & BUILD --"
	$(VERILATOR) --cc --exe -x-assign fast -Wall --build -j --assert --trace --timing  -j GCD.v sim_main.cpp
	@echo "-- Run --"
	obj_dir/VGCD
	@echo "-- Done --"

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core