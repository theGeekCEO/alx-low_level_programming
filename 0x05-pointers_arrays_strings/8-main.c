#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* main - Entry point
* Description: Call other function
*/

int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	array[5] = 94959;
	print_array(array, 5);
	return (0);
}

