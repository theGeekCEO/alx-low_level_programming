#include <stdio.h>
#include <string.h>
/**
**_strncpy - function to copy string
*@dest: string to copy to
*@src: string to copy from
*@n: number of string to copy
*Return: returns concatenated string
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
