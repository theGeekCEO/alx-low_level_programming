#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*main - program that prints its name
*@argc: Argument count
*@argv: array of arguments
*Return: always succcess (0)
*/

int  main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}

