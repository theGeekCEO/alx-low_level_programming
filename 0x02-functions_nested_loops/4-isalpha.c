#include "main.h"

/**
* _isalpha- function name
* Description: Check if a given character
* is an alphabet
* @c: character to check
* Return: true (0) or false (1);
*/

int _isalpha(int c)
{
	char a = c >= 'a' && c <= 'z';
	char b =  c >= 'A' && c <= 'Z';

	if (a || b)
		return (1);
	else
		return (0);
}
