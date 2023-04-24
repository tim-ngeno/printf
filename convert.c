#include "main.h"

/**
 * convert - handles conversion of integers
 *
 * @n: the input integer to be converted
 * @base: the base converter
 *
 * Return: pointer to converted base
 */
char *convert(unsigned int n, int base)
{
	/* static keyword to ensure the field values
are not changed when out of scope */

	static char field[] = "0123456789ABCDEF";
	static char temp[50]; /* temporary buffer to hold field values */
	char *p;

	p = &buffer[49];
	*p = '\0';

	do
	{
		*--ptr = field[n % base]; /* same as *ptr-- */
		n /= base;
	} while (num != 0);

	return (p);
}
