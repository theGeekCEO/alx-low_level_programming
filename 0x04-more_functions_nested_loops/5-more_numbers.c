#include "main.h"

/**
* more_numbers - prints numbers from 0 - 14
* 10 times
* Return void
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		while (j < 15)
		{
			if (j < 10)
				_putchar(j++ + '0');
			else
			{
				char k = ((j / 10) + '0');
				int m = 0;

				while (m++ < 2)
				{
					_putchar(k);
					k = ((j % 10) + '0');
				}
				j++;
			}
		}
		_putchar('\n');
	}
}
