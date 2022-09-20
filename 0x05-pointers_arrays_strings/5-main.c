#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: Call other function
*/

int main(void)
{
	char s[10] = "ikechukwu";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}

