#include "main.h"
#include <stdio.h>

/**
*_strlen - Function that returns the length of a string
*@s: this is the input string
*Return: Lenngth of the string
*/
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
