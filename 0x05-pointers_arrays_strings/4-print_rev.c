#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - function to reverse a string
* @s: string to reverse
*/

void print_rev(char *s)
{
	int i, length;

	length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
