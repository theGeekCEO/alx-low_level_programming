#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*create_array -  function that creates an array of chars,
*and initializes it with a specific char.
*@size: size of the array
*@c: initial value
*Return: array of chars (cc)
*/

char *create_array(unsigned int size, char c)
{
	char *cc;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	cc = (char *) malloc(size * sizeof(c));

	if (cc == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(cc + i) = c;
	}
	return (cc);
}

