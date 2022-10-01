#include <stdio.h>

/**
* *_strcpy - copy string from one pointer to another
*@dest: receiving point
*@src: string to copy from
*Return: String (destination)
*/

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
