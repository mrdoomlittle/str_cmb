ARC=
MDLINT_INC=/usr/local/include
all:
	gcc -Wall -c -std=c11 $(ARC) -I$(MDLINT_INC) -o strcmb.o strcmb.c
	ar rcs lib/libmdl-strcmb.a strcmb.o
	cp strcmb.h inc/mdl
debug: clean all
	gcc -Wall -std=c11 $(ARC)-I$(MDLINT_INC) -Llib -o main main.c -lmdl-strcmb
clean:
	rm -f main
	rm -f *.o
	rm -f lib/*.a
	rm -f inc/mdl/*.h

