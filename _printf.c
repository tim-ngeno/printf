#include "main.h"

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

	/* handle NULL format pointer */
	if (format == NULL)
		return (-1);

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
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			print_d(va_arg(params, int));
			i++;
		}
		else if (format[i + 1] == 'o')
		{
			print_octal(va_arg(params, unsigned int));
			i++;
		}
		/* else if (format[i + 1] == 'x')
		{
			k = va_arg(params, unsigned int);
			_putchar(convert(k, 16));
			i++;
			j += k;
		}
		*/

		j += 1;
	}

	va_end(params);
	return (j);
}
