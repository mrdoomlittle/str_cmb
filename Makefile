ARC=
MDLINT_INC=/usr/local/include
all:
	gcc -Wall -c -std=c11 $(ARC) -I$(MDLINT_INC) -o str_cmb.o str_cmb.c
	ar rcs lib/libmdl-str_cmb.a str_cmb.o
	cp str_cmb.h inc/mdl
debug: clean all
	gcc -Wall -std=c11 $(ARC)-I$(MDLINT_INC) -Llib -Iinc -o main main.c -lmdl-str_cmb
clean:
	rm -f main
	rm -f *.o
	rm -f lib/*.a
	rm -f inc/mdl/*.h

