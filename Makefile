.PHONY: all clean build

CXX := g++
CXXFLAGS := -Wall -Wextra -Iheaders -lstdc++

TARGET := parser

SRC := $(wildcard source/*.cpp)
OBJ := $(SRC:source/%.cpp=build/%.o)

all: build $(TARGET)

build:
	mkdir -p build

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

build/%.o: source/%.cpp | build
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf build $(TARGET)