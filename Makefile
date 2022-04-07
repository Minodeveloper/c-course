example1: 
	gcc-11 -Wall -std=c99 ./example-1.c -o  example-1.exec 
example2:
	gcc-11 -Wall -std=c99 ./example-2.c -o  example-2.exec
	

run1:
	./example-1.exec
run2:
	./example-2.exec

clean:
	rm ./*.exec