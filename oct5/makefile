myprog:	myprog.c libmylib.a
			gcc myprog.c -L. -lmylib -o myprog

sum.o:	sum.c mylib.h
			gcc sum.c -c

show.o:	show.c mylib.h
			gcc show.c -c

libmylib.a:	show.o sum.o
			ar rs libmylib.a show.o sum.o

clean:	
			rm myprog
			rm libmylib.a
			rm sum.o
			rm show.o
