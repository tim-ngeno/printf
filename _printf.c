#include "main.h"
#include <stdarg.h>

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

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		ret_value += 1;
	}

	return (ret_value);
}


/**
 * _printf - print arguments passed to the function
 *
 * @format: pointer to argument specifier
 *
 * Return: 0 on success
 */
int _printf(const char *format, ...)
{
	int i;
	int j = 0; /*return value of _printf() */
	int s_val; /* return value of print_string() */
	va_list params;

	va_start(params, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(params, int));
			i++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if (format[i + 1] == 's')
		{
			s_val = print_string(va_arg(params, char *));
			i++;
			j += (s_val - 1);
		}

		j += 1;
	}

	return (j);
}
