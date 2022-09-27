#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strstr - function that locates a substring.
*@haystack: the main string
*@needle: search string
*Return: pointer to first occurence  of needle
*/


char *_strstr(char *haystack, char *needle)
{
	char *result = strstr(haystack, needle);

	return (result);
}

