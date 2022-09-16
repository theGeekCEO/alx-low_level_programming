#include "main.h"

/**
* print_numbers - print all digits
* from 0 - 9
* Return: void
*/

void print_numbers(void)
{
	char c = 48;

	while (c < 58)
	{
		_putchar(c++);
	}
	_putchar('\n');
}
