#include "main.h"
/**
* print_diagonal - Prints diagonally
* placed character "\" each in a new
* line
* @n: number of lines
* Return: void
*
*/

void print_diagonal(int n)
{

	int i = 0;

	while (i < n)
	{
		int j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		i++;
		_putchar('\n');

	}
	if (n <= 0)
		_putchar('\n');
}
