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
	int i = 0, j = 0, s_val;
	va_list params;

	va_start(params, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
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
		{	print_octal(va_arg(params, unsigned int));
			i++;
		}
		j += 1;
	}

	va_end(params);
	return (j);
}
