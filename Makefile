ARC=
MDLINT_INC=/usr/local/include
all:
	gcc -c -std=c11 $(ARC) -I$(MDLINT_INC) -o str_cmb.o str_cmb.c
	ar rcs lib/libstr_cmb.a str_cmb.o
	cp str_cmb.h inc
debug: clean all
	gcc -std=c11 $(ARC)-I$(MDLINT_INC) -Llib -o main main.c -lstr_cmb
clean:
	rm -f main
	rm -f *.o
	rm -f lib/*.a
	rm -f inc/*.h

