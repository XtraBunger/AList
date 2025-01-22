GXX = g++
CFLAGS = -g -Wall -std=c++20

TARGET = AListTest
OBJECTS = AListTest.o

# Build target
$(TARGET): $(OBJECTS)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Compile source files
AListTest.o: AListTest.cpp AList.h
    $(CXX) $(CXXFLAGS) -c AListTest.cpp

# Clean up build files
clean:
    rm -f $(OBJECTS) $(TARGET)


run:
    ./$(TARGET)