#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcmp - function that compares two strings.
*@s1: fist string
*@s2: second string
*Return: Integer, the result of the comparism
*/

int _strcmp(char *s1, char *s2)
{
	int r;

	r = strcmp(s1, s2);
	return (r);
}
