#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strchr - function that locates a character in a string.
*@s: the string
*@c: the character to find
*Return: Returns @c or null
*/


char *_strchr(char *s, char c)
{
	char *cp;

	cp = strchr(s, c);
	return (cp);
}

