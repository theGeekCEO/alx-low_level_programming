#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Function that print
* natural numbers from n to 98
* @n: starting point
* Return: Success always (0)
*/

void print_to_98(int n)
{
	do {
		if (n == 98)
		{
			printf("%d\n", n);
			break;
		}
		else
		{
			printf("%d, ", n);
		}
		 n > 98 ? n-- : n++;
	} while (n <= 98 || n >= 98);
}

