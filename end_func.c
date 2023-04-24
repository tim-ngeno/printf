#include "main.h"

/**
 * end_func - ends _printf() function
 * @stk: arguments stock
 * Return: always -1
 */

int end_func(stock_t *stk)
{
	int ret_value;

	if (stk)
	{
		ret_value = stk->error ? -1 : stk->buf_index;

		if (stk->i)
			puts_mod(stk->buffer, stk->buf_index);
		va_end(*(stk->args));
		if (stk->buffer)
			free(stk->buffer);
		free(stk);
	}
	else
		ret_value = -1;
	return (ret_value);
}
