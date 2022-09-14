#include "main.h"

/**
*print_alphabet_x10 -  A function that
*prints alphebets from a-z 10 times;
*Description
*Return: Void
 */

void print_alphabet_x10(void)
{
	char l = 'a';
	int i = 0;

	while (i < 10)
	{
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		i++;
		l = 'a';
	}
}
