#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts2 - prints every charater of a string followed
* by a new line
*@str:- string to print
*/

void puts2(char *str)
{

	unsigned int i, j = strlen(str);

	for (i = 0; i < j; i++)
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
