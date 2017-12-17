arc=
defines=
inc_flags=
ifndef mdlint_inc_dir
 mdlint_inc_dir=/usr/local/include
endif
all:
	gcc -Wall -c -std=c11 -D__$(arc) -I$(mdlint_inc_dir) $(inc_flags) $(defines) -o str_cmb.o str_cmb.c
	ar rcs lib/libmdl-str_cmb.a str_cmb.o
	cp str_cmb.h inc/mdl
debug: clean all
	gcc -Wall -std=c11 -D__$(arc) -I$(mdlint_inc_dir) $(defines) -Llib -Iinc -o main main.c -lmdl-str_cmb
clean:
	rm -f main
	rm -f *.o
	rm -f lib/*.a
	rm -f inc/mdl/*.h

