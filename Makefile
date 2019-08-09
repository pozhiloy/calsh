all: 
	gcc -o calsh calsh.c -lm
install:
	sudo cp calsh /usr/bin
	rm calsh