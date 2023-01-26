CXX = g++
CXXFLAGS = -std=c++20 -Wall

all: clean test

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

clean: 
	rm test