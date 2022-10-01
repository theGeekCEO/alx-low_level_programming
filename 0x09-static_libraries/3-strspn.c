#include <stdio.h>
#include <string.h>
/**
*_strspn - function that gets the length of a prefix substring.
*@s: the String
*@accept: accept
*Return: the length of prefix substring
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = strspn(s, accept);

	return (length);
}

