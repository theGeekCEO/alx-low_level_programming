#include <stdio.h>
#include <string.h>
#include "function_pointers.h"
/**
*int_index - function that searches for an integer.
*@array: array of integers
*@size: size of the array
*@cmp: pointer to the function that searches for the int
*Return: index of the first occurence of the int or -1
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j;

	if ((array && cmp) && (size > 0))
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j == 1)
				return (i);
		}
		return (-1);
	}
	return (-1);
}

