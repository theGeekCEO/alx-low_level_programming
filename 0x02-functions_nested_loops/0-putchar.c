#include "main.h"

/**
*main - Entry point of the program
*Description:  program that prints _putchar, followed by a new line.
*Return: Success (0)
*/

int main(void)
{
	char mychars[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	while (i < 8)
	{
		_putchar(mychars[i]);
		i++;

	}
	_putchar('\n');
	return (0);
}
