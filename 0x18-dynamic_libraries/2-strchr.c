#include "main.h"
#include <stddef.h> 
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s
*
*@s:string to search
*@c:string to search for
*
*Return: returns pointer to first occcurence of c
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
