#include "main.h"

/**
* print_last_digit - function name
*
* Description: a function that prints the last digit of a number.
*
* a given input
*
* @n: number to convert
* Return: unsigned int;
*/
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
