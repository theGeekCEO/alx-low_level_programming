#!/bin/bash
len=$(ls *.c | wc -l)

if (($len > 0))
then
	gcc -c *.c
	gcc -fPIC -c *.c
	gcc -shared -o liball.so *.o
	cp ./liball.so /usr/lib
	ldconfig
fi

