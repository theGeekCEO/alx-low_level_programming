#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*main - prints number of arguments passed to it
*@argc: Argument count
*@argv: array of the arguments
*Return: Always success (0)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
