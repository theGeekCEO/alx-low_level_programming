#include "main.h"
#include <stdio.h>

/**
* print_array - function that prints n elements of an
* an array
* @a: the array to print from
* @n: number of elements to print
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
