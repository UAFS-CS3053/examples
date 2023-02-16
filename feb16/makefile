myprog: myprog.c libmylib.a
	gcc myprog.c -L. -lmylib -o myprog

libmylib.a:	show.o sum.o
	ar rs libmylib.a show.o sum.o

show.o:	show.c mylib.h
	gcc -c show.c -o show.o

sum.o:	sum.c mylib.h
	gcc -c sum.c -o sum.o

clean:
	rm myprog
	rm libmylib.a
	rm sum.o
	rm show.o

