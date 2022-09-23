#include "main.h"
#include <stdio.h>
#include <string.h>
/**
**cap_string - function to capitalize each world
*@str: strings to capitalize
*Return: Capitalized strings
*
*/

char *cap_string(char *str)
{
	int converted = 0, length, i;
	char c;

	length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (*(str + i) == '\n' || *(str + i) == '\t' || *(str + i) == ' '
		|| *(str + i) == ',' || *(str + i) == ';' || *(str + i) == '.' ||
		*(str + i) == '!' || *(str + i) == '?' ||
		*(str + i) == '"' || *(str + i) == '(' ||
		*(str + i) == ')' || *(str + i) == '{' || *(str + i) == '}')
		{
			converted = 0;
		}
		else
		{
			if (converted)
			{
				continue;
			}

			c = *(str + i);

			if (*(str + i) >= 'a' && *(str + i) <= 'z')
			{
				int cap  = 'A';
				int diff = c - 'a';
				*(str + i) = cap + diff;
		}
			converted = 1;
		}
	}
	return (str);
	}
