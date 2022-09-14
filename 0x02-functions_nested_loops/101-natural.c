#include <stdio.h>
/**
* main - Entry point function name
* Description: a function
* that prints the n times
* table, starting with 0.
* if n less then 0 or greater
* than 15 it prints nothing
* Return: Success (0)
*/
int main(void)
{
	int sum = 0, a;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
