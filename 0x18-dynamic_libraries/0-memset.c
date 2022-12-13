#include "main.h"
/**
*_memset - fills the first n bytes of the memory area
*@s:target
*@b: constant byte
*@n:number of byte
*Return: returns new value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
