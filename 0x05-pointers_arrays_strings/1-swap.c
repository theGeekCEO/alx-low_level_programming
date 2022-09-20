#include "main.h"
#include <stdio.h>

/**
* swap_int - Function that swap two numbers;
* @a: first number
* @b: second number
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}


