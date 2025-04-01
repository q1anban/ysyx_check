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
include ../Makefile
