/**
* _islower - function name
* Description: Check if a given character
* is a lower case
* @c: character to check
* Return: true (0) or false (1);
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
