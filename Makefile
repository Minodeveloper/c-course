build:
	gcc-11 -Wall -std=c99 ./*.c -o program.o
run:
	./program.o


clean:
	rm ./*.o