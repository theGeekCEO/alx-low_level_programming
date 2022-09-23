#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)

{
	int count = 0, i;
	int low_case[] = {97, 101, 111, 116, 108};
	int upp_case[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_case[i] || *(s + count) == upp_case[i])
			{
				*(s + count) = nums[i];
				break;
			}
		}
		count++;
	}

	return (s);
}

