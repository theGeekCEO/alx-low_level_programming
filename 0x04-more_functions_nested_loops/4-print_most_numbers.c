#include "main.h"

/**
* print_most_numbers - print all digits
* from 0 - 9 except 2 and 4
* Return: void
*/

void print_most_numbers(void)
{
	char c = 48;

	while (c < 58)
	{
		if (c == 50 || c == 52)
		{
			c++;
			continue;
		}
		else
			_putchar(c++);
	}
	_putchar('\n');
}
