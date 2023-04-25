#include "main.h"

/**
* print_bigS - outputs in hexadecimal
* @l: va_list arguments
* @f: pointer
* Return: characters printed
*/
int print_bigS(va_list l, flags_t *f)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		return (_puts("(null)"));
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = convert(s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}

/**
* print_rev - prints a string in reverse
* @l: argument
* @f: pointer to struct
* Return: length of printed string
*/
int print_rev(va_list l, flags_t *f)
{
	int a = 0, b;
	char *str = va_arg(l, char *);

	(void)f;
	if (!str)
		str = "(null)";
	while (str[a])
		a++;
	for (b = a - 1; b >= 0; b--)
		_putchar(str[b]);
	return (a);
}

/**
* print_rot13 - prints a string using rot13
* @l: arguments
* @f: pointer
* Return: length of the printed string
*/
int print_rot13(va_list l, flags_t *f)
{
	int i, n;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(l, char *);

	(void)f;
	for (n = 0; str[n]; n++)
	{
		if (str[n] < 'A' || (str[n] > 'Z' && str[n] < 'a') || str[n] > 'z')
			_putchar(str[n]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (str[n] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}
	return (n);
}

/**
* print_percent - prints a percent
* @l: arguments
* @f: pointer
* Return: number(characters printed)
*/
int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
