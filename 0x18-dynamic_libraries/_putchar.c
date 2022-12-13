#include <unistd.h>

/**
 * _putchar - write character to stdot
 * @c: character to write
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
