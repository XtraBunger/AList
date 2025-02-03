GXX = g++
CFLAGS = -g -Wall -std=c++20
TARGETS = AListAddLeft AListAddRight AListRemoveLeft AListRemoveRight

# Build all targets
all: $(TARGETS)

# Build individual test programs
AListAddLeft: AListAddLeft.o
	$(GXX) $(CFLAGS) -o $@ $^

AListAddRight: AListAddRight.o
	$(GXX) $(CFLAGS) -o $@ $^

AListRemoveLeft: AListRemoveLeft.o
	$(GXX) $(CFLAGS) -o $@ $^

AListRemoveRight: AListRemoveRight.o
	$(GXX) $(CFLAGS) -o $@ $^

# Compile source files
%.o: %.cpp
	$(GXX) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(TARGETS) *.o

# Run test programs
run: $(TARGETS)
	@for target in $(TARGETS); do \
	    echo "Running $$target"; \
	    ./$$target; \
	done