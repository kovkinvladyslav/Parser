.PHONY: all clean build

CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17 -O2

TARGET := parser

SRC := $(wildcard *.cpp)
OBJ := $(SRC:%.cpp=%.o)

all: build clean

build: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

