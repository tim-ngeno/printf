#include "main.h"

/**
 * print_string - print strings with the %s specifier
 *
 * @s: the input string
 *
 * Return: On success 0
 */
int print_string(char *s)
{
	int i = 0;
	int ret_value = 0;

	if (s == NULL)
		return (-1);

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		ret_value += 1;
	}

	return (ret_value);
}
