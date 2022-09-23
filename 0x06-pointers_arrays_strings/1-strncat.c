#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* *_strncat - function to concatenate n
* amount of string
* @dest: string to concat to
* @src:  string to cut from
* @n: length of string
*Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int counter = 0;
	char *p;

	p = malloc(n + 1);
	while (counter++ < n)
	{
		*(p + counter - 1) = *(src + counter - 1);
	}
	strcat(dest, p);
	return (dest);
}
