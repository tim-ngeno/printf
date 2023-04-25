 #include "main.h"

/**
* print_int - prints an integer
* @l: arguments
* @f: pointer
* Return: number of characters printed
*/
int print_int(va_list l, flags_t *f)
{
	int num = va_arg(l, int);
	int r = count_digit(num);

	if (f->space == 1 && f->plus == 0 && num >= 0)
		r += _putchar(' ');
	if (f->plus == 1 && num >= 0)
		r += _putchar('+');
	if (num <= 0)
		r++;
	print_number(num);
	return (r);
}

/**
* print_unsigned - prints an unsigned integer
* @l: arguments
* @f: pointer to struct flags
* Return: number of characters printed
*/
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int i = va_arg(l, unsigned int)
		char *str = convert(i, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
* print_number - function which loops int then prints all its digits
* @n: integer
*/
void print_number(int n)
{
	unsigned int num1;

	if (n < 0)
	{
		_putchar('-');
		num1 = -n;
	}
	else
		num1 = n;
	if (num1 / 10)
		print_number(num1 / 10);
	_putchar((num1 % 10) + '0');
}

/**
* count_digit - returns number of digits in an int
* @i: integer to evaluate
* Return: number of digits
*/
int count_digit(int i)
{
	unsigned int l = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		l++;
	}
	return (l);
}
