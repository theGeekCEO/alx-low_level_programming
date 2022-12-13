#include "main.h"
/**
*_memcpy - copy n bytes from memory area src to area dest
*@dest: destination
*@src: source
*@n:number of bytes to copy
*Return: returns a pointer to n
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
