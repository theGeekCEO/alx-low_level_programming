#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
*print_strings - function to print strings
*@separator: String separator
*@n: number of strings
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if ((separator) && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

