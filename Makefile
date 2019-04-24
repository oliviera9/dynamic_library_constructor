all: main libfoo.so

main: libfoo.so main.c
	gcc -L./. -Wl,-rpath=./. -o test main.c -lfoo

foo.o: foo.c
	gcc -c -Wall -Werror -fpic foo.c

libfoo.so: foo.o
	gcc -shared -o libfoo.so foo.o