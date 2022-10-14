#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
*print_numbers - a function that print numbers
*@separator: number seperator
*@n: number counts
*Return: void
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((separator) && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
