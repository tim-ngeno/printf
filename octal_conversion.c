#include "main.h"

/**
 * print_octal - converts number to octal
 *
 * @n: the input integer
 *
 * Return: converted integer
 */
int print_octal(unsigned int n)
{
	if (n > 7)
	{
		_putchar(n / 8 + '0');
		_putchar(n % 8 + '0');
	}
	else
	{
		_putchar(n + '0');
	}

	return (0);
}
