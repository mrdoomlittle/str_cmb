ARC=
MDLINT_INC=/usr/local/include
all:
	g++ -c -std=c++11 $(ARC) -I$(MDLINT_INC) -o strcmb.o strcmb.cpp
	ar rcs lib/libstrcmb.a strcmb.o

	cp strcmb.hpp inc

clean:
	rm -f *.o
	rm -f lib/*.a
	rm -f inc/*.hpp

