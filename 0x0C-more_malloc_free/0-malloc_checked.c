#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*malloc_checked - function to alloc space using malloc
*@b: size of of the space
*Return: pointer to the space
*/


void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);
	return (c);
}

