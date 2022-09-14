#include "main.h"

/**
*print_alphabet - A function that
* prints alphebets from a-z;
*Return: Void
 */

void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
