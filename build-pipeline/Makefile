CC=gcc
AS=as

all: clean preprocess compile assemble link

clean:
	rm -rf hello_world.i hello_world.s hello_world.o hello_world

preprocess: hello_world.c
	$(CC) -E $< > hello_world.i

compile: preprocess
	$(CC) -S hello_world.i

assemble: compile
	$(AS) hello_world.s -o hello_world.o	

link: assemble
	$(CC) hello_world.o -o hello_world
