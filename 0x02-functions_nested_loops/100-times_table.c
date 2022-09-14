#include "main.h"

/**
* print_times_table - function name
* Description: a function
* that prints the n times
* table, starting with 0.
* if n less then 0 or greater
* than 15 it prints nothing
* @n: number maximum number
* Return: true (0)
*/
void print_times_table(int n)
{
	int a, b, c, d, op;

	for (a = 0; a <= n; a++)
	{
		if (n < 0 || n > 15)
		{
			break;
		}
		_putchar(48);
		for (b = 1; b <= n; b++)
		{
			op = a * b;
			_putchar(44);
			_putchar(32);
			if (op <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(op + 48);
			}
			else if (op > 9 && op < 100)
			{
				_putchar(32);
				_putchar((op / 10) + 48);
				_putchar((op % 10) + 48);
			}
			else
			{
				c = op / 10;
				d = c / 10;
				_putchar(d + 48);
				_putchar((c % 10) + 48);
				_putchar((op % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
