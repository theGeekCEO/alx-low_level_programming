#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts_half - prints second half of a string
* @str: string to print
*/

void puts_half(char *str)
{
	int l, j, r;

	l = strlen(str);
	r = l % 2;
	j = r == 0 ? l / 2 : (l / 2) + 1;

	for (; j < l; j++)
	{
		putchar(*(str + j));
	}
	putchar('\n');

}
