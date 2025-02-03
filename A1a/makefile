GXX = g++
CFLAGS = -g -Wall -std=c++20
TARGETS = AListAddLeft AListAddRight AListRemoveLeft AListRemoveRight
OBJECTS = AList.o

# Build all targets
all: $(TARGETS)

# Build individual test programs
AListAddLeft: AListAddLeft.o $(OBJECTS)
	$(GXX) $(CFLAGS) -o $@ $^

AListAddRight: AListAddRight.o $(OBJECTS)
	$(GXX) $(CFLAGS) -o $@ $^

AListRemoveLeft: AListRemoveLeft.o $(OBJECTS)
	$(GXX) $(CFLAGS) -o $@ $^

AListRemoveRight: AListRemoveRight.o $(OBJECTS)
	$(GXX) $(CFLAGS) -o $@ $^

# Compile source files
%.o: %.cpp
	$(GXX) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJECTS) $(TARGETS) *.o

# Run test programs
run: $(TARGETS)
	@for target in $(TARGETS); do \
	    echo "Running $$target"; \
	    ./$$target; \
	done