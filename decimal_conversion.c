#include "main.h"
#include <stdlib.h>

/**
 * print_d - print integer with %d specifier
 *
 * @d: integer input
 *
 * Return: 0 if success
 */
int print_d(int d)
{
	if (d < 0)
	{
		d = -d;
		_putchar('-');
	}

	if (d > 9)
	{
		_putchar((d / 10) + '0');
		_putchar((d % 10) + '0');
	}
	else
	{
		_putchar(d + '0');
	}
	return  (0);
}
