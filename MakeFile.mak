GXX = g++
CFLAGS = -g -Wall -std=c++20
TARGET = AList
OBJECTS = AList.o

# Build target
$(TARGET): $(OBJECTS)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Compile source files
AList.o: AList.cpp AList.h
    $(CXX) $(CXXFLAGS) -c AList.cpp

# Clean up build files
clean:
    rm -f $(OBJECTS) $(TARGET)


run:
    ./$(TARGET)