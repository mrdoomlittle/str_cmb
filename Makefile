ARC=
MDLINT_INC=/usr/local/include
all:
	gcc -c -std=c11 $(ARC) -I$(MDLINT_INC) -o strcmb.o strcmb.c
	ar rcs lib/libstrcmb.a strcmb.o
	cp strcmb.h inc
debug: clean all
	gcc -std=c11 $(ARC)-I$(MDLINT_INC) -Llib -o main main.c -lstrcmb
clean:
	rm -f main
	rm -f *.o
	rm -f lib/*.a
	rm -f inc/*.h

