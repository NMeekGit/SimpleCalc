# makefile designed for SimpleCalc.cpp

# Specify compiler
CXX = g++
# Compiler Flags
#	-Wall	   -> shows all warnings
#	-g		   -> shows gdb debugging information
#	-std=c++11 -> use the C++ 2011 ISO standard
CXXFLAGS = -Wall -g -std=c++11
# Output Flags
CXXOUT = -o SimpleCalc

# Main compilation
SimpleCalc: src/SimpleCalc.cpp
		$(CXX) $(CXXOUT) $(CXXFLAGS) $^