CC     = gcc
CFLAGS = -Wall -Wextra -Iinclude

TARGET = vcpu
SRC    = $(wildcard src/*.c)
OBJ    = $(SRC:src/%.c=build/%.o)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

build/%.o: src/%.c | build
	$(CC) $(CFLAGS) -c -o $@ $<

build:
	mkdir -p build

clean:
	rm -rf build $(TARGET)

.PHONY: clean
