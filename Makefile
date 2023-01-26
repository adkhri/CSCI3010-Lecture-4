CXX = g++
CXXFLAGS = -std=c++20 -Wall

all: test

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

clean: 
	rm test