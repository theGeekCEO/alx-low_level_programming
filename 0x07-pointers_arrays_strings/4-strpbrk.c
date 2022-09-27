#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strpbrk - function that searches a string for any of a set of bytes.
*@s: Main the string
*@accept: search string
*Return: pointer to the found string
*/

char *_strpbrk(char *s, char *accept)
{
	char *result = strpbrk(s, accept);

	return (result);

}

