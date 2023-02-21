# ########################################################
# Makefile for Shared Library and Dynamic Runtime Linking
# ########################################################

CC=gcc

myprog: myprog.c libmylib.so 
	$(CC) myprog.c -L. -lmylib -o myprog

# Create the Dependent Object Files for the Library

sum.o: sum.c mylib.h
	$(CC) -c -fPIC sum.c -o sum.o

show.o: show.c mylib.h
	$(CC) -c -fPIC show.c -o show.o

# Create Shared Library

libmylib.so: show.o sum.o
	$(CC) -shared sum.o show.o -o libmylib.so 

#  Create a Executable that dynamically loads at Runtime 

runtime: runtime.c libmylib.so 
	$(CC) runtime.c -ldl -o runtime

clean:
	rm myprog
	rm libmylib.so
	rm sum.o
	rm show.o

install:  
	cp myprog /usr/bin
	cp libmylib.so /usr/lib
	chmod 755 /usr/lib/libmylib.so

uninstall:  
	rm /usr/bin/myprog
	rm /usr/lib/libmylib.so
	
