#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*print_name -  function that prints a name.
*@name: the name to print
*@f: point to a function that prints name
*Return: Nothing (void)
*/


void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

