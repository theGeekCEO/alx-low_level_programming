#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_puts_recursion - function that prints a string, followed by a new line
*@s: string
*/


void _puts_recursion(char *s)
{
		if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

