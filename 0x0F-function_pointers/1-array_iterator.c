#include <stdio.h>
#include <string.h>
/**
*array_iterator - function that executes a function given as a
*parameter on each element of an array.
*@array: array to iterate
*@size: size of the array
*@action: function perform operation on each array element
*Return: Nothing (void)
*
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array && action) && (size > 0))
		for (i = 0; i < size; i++)
			action(array[i]);
}

