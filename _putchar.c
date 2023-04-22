#include <unistd.h>

/**
 * _putchar - prints a single character to stdout
 *
 * @s: the characater argument
 *
 * Return: 0 on success
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}
