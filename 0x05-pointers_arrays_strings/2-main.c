#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: Call other function
*/

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}

