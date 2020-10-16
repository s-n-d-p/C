CC=gcc
DEPS = add.h

.PHONY = clean build

all: build

clean:
	rm -rf *.o *.out

build: add.o main.o
	$(CC) -o main.out $^

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $<
