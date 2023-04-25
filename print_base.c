#include "main.h"

/**
* print_hex - prints a number in hexadecimal base in lowercase
* @l: arguments from _printf
* @f: pointer to struct flags
* Return: number of characters printed
*/

int print_hex(va_list l, flags_t *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str1 = convert(n, 16, 1);
	int count = 0;

	if (f->hash == 1 && str1[0] != '0')
		count += _puts("0x");
	count += _puts(str1);
	return (count);
}

/**
 * print_hex_big - prints a number in hexadecimal base,in uppercase
 * @l: arguments from _printf
 * @f: pointer
 * Return: number of characters printed
 */

int print_hex_big(va_list l, flags_t *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str2 = convert(n, 16, 0);
	int count = 0;

	if (f->hash == 1 && str2[0] != '0')
		count += _puts("0X");
	count += _puts(str2);
	return (count);
}

/**
 * print_binary - prints number in base 2
 * @l: arguments from _printf
 * @f: pointer
 * Return: number of characters printed
 */

int print_binary(va_list l, flags_t *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str3 = convert(n, 2, 0);

	(void)f;
	return (_puts(str3));
}

/**
 * print_octal - prints a number in base 8
 * @l: arguments from _printf
 * @f: pointer to struct
 * Return: the number of char printed
 */

int print_octal(va_list l, flags_t *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str4 = convert(n, 8, 0);
	int count = 0;

	if (f->hash == 1 && str4[0] != '0')
		count += _putchar('0');
	count += _puts(str4);
	return (count);
}
