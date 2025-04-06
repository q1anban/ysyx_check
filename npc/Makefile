all:
	@echo "Write this Makefile by your self."
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --build --exe --Wall -j 0 vsrc/example.v  csrc/main.cpp
	obj_dir/Vexample
wave:
	verilator --cc --build --exe --trace-fst --Wall -j 0 vsrc/example.v  csrc/main.cpp
	obj_dir/Vexample
	gtkwave dump.fst

#rule for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk
TOP_NAME = example
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert
AUTO_BIND_SRC = $(abspath ./csrc/autobind.cpp)
VSRC = $(shell find $(abspath ./vsrc) -name "*.v")
CSRC = $(shell find $(abspath ./csrc) -name "*.cpp" -or -name "*.c")  
CSRC += $(abspath ./csrc/autobind.cpp)
BIN = $(abspath ./obj_dir/Vexample)
OBJ_DIR = $(abspath ./obj_dir)
INC_PATH ?=
CXXFLAGS +=$(addprefix -I,$(INC_PATH))  -DTOP_NAME="\"V$(TOP_NAME)\""

nvboard:$(VSRC) $(CSRC) $(NVBOARD_ARCHIVE)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py vsrc/example.nxdc $(AUTO_BIND_SRC)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOP_NAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
	obj_dir/Vexample
include ../Makefile
