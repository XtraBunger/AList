GXX = g++
CFLAGS = -g -Wall -std=c++20
TARGET = AListout
OBJECTS = AList.o

# Build target
$(TARGET): $(OBJECTS)
	$(GXX) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# Compile source files
AList.o: AList.cpp AList.h
	$(GXX) $(CFLAGS) -c AList.cpp

# Clean up build files
clean:
	rm -f $(OBJECTS) $(TARGET)

# Run the program
run:
	./$(TARGET)
