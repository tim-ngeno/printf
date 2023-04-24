#include "main.h"

/**
 * _printf - print arguments passed to function
 * @format: pointer to argument specifier
 * Return: 0 on success
 */

int _printf(const char *format, ...)
{
	va_list args_list;
	stock_t *stk;
	void (*temp_func)(stock_t *);

	if (!format)
		return (-1);

	va_start(args_list, format);
	stk = build_stock(&args_list, format);

	while (stk && format[stk->i] && !stk->error)
	{
		stk->c0 = format[stk->i];
		if (stk->c0 != '%')
			write_buffer(stk);
		else
		{
			parse_specifiers(stk);
			temp_func = match_specifier(stk);
			if (temp_func)
				temp_func(stk);
			else if (stk->c1)
			{
				if (stk->flag)
					stk->flag = 0;
				write_buffer(stk);
			}
			else
			{
				if (stk->space)
					stk->buffer[--(stk->buf_index)] = '\0';
				stk->error = 1;
			}
		}
		stk->i++;
	}
	return (end_func(stk));
}
