#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
*sum_them_all - function that returns the sum of all its parameters
*@n: Number of args
*Return: 0 if n = 0 or sum
*/


int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	if (n < 1)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	return (sum);
}
