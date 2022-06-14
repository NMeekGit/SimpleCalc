# makefile designed for SimpleCalc.cpp

# Specify compiler
CXXB = g++
CXXW = cl
# Compiler Flags
#	-Wall	   -> shows all warnings
#	-g		   -> shows gdb debugging information
#	-std=c++11 -> use the C++ 2011 ISO standard
CXXFLAGSBASH = -Wall -g -std=c++11
CXXFLAGSWIN = /W4 /EHsc
# Output Flags
CXXBASH = -o SimpleCalc
# Main compilation
BASH: src/SimpleCalc.cpp
		$(CXXB) $(CXXBASH) $(CXXFLAGSBASH) $^

WIN: src\SimpleCalc.cpp
		$(CXXW) $(CXXFLAGSWIN) $^