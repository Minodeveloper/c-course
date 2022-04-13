challengespace:
	gcc-11 -Wall -std=c99 ./challengespace.c -o challengespace.exec
example1: 
	gcc-11 -Wall -std=c99 ./example-1.c -o  example-1.exec 
example2:
	gcc-11 -Wall -std=c99 ./example-2.c -o  example-2.exec
example3:
	gcc-11 -Wall -std=c99 ./example-3.c -o  example-3.exec
example4:
	gcc-11 -Wall -std=c99 ./example-4.c -o  example-4.exec
boolean:
	gcc-11 -Wall -std=c99 ./boolean.c -o  boolean.exec
enums:
	gcc-11 -Wall -std=c99 ./enums.c -o  enums.exec
typedef:
	gcc-11 -Wall -std=c99 ./typedef.c -o  typedef.exec
# boolean:
# 	gcc-11 -Wall -std=c99 ./boolean.c -o  boolean.exec
# boolean:
# 	gcc-11 -Wall -std=c99 ./boolean.c -o  boolean.exec
	
runchallengespace:
	./challengespace.exec
run1:
	./example-1.exec
run2:
	./example-2.exec
run3:
	./example-3.exec
run4:
	./example-4.exec
runboolean:
	./boolean.exec
runenums:
	./enums.exec
runtypedef:
	./typedef.exec

clean:
	rm ./*.exec