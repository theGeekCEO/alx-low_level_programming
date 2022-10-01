#include <stdio.h>
#include <string.h>

/**
**_memcpy - Copies memory location
*@dest: destination
*@src: source
*@n: number of bytes
*Return: Returns Destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

