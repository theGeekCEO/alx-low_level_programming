#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*factorial - calulate the factorial of a given number
*@n: the number
*Return: The factorial
*
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}

