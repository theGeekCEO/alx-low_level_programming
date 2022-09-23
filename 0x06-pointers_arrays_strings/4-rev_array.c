#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* reverse_array - reverses the content of an array of integers.
* @a: array of integer
* @n: number of element in a
*/


void reverse_array(int *a, int n)
{
	int i, j, k = 0;

	for (i = 0; k < n; i++, k++)
	{
		j = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = j;
		k++;
	}
}
