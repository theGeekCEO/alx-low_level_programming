#include <stdio.h>
/**
* main - Entry point function name
* Description:Write a program that
* prints the first 50 Fibonacci
* numbers, starting with 1 and 2,
* followed by a new line.
* The numbers must be separated by
* comma, followed by a space,
* You are allowed to use the
* standard library
* Return: Success (0)
*/
int main(void)
{
	long int prev, sum, current;
	int a;

	sum = 0;
	current = 1;
	prev = 0;

	for (a = 0; a < 50; a++)
	{
		prev = current;
		current += sum;
		sum = prev;
		if (a == 49)
		{
			printf("%ld\n", current);
		}
		else
		{
			printf("%ld, ", current);
		}
	}
	return (0);
}
