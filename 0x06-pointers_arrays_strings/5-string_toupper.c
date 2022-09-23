#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *string_toupper - convert all lower case to upper
* @str: string to covert
* Return: converted string
*/
char *string_toupper(char *str)
{
	int l, i, cap, diff;

	l = strlen(str);
	i = 0;

	while (i < l)
	{
		char c = *(str + i);

		if (c >= 'a' && c <= 'z')
		{
			cap  = 'A';
			diff = c - 'a';
			*(str + i) = cap + diff;
		}
		i++;
	}
	return (str);
}

