#include "main.h"

/**
 * p_binary - function to convert unsigned int to binary
 * @stk: argument
 */

void p_binary(stock_t *stk)
{
	unsigned int n = va_arg(*(stk->args), unsigned int);
	int i, j;
	char *bit, *cp;

	bit = _calloc(33, sizeof(char));
	if (bit)
	{
		for (i = 0; n; i++, n /= 2)
			bit[i] = ((n % 2) + '0');
		if (i == 0)
		{
			stk->c0 = '0';
			write_buffer(stk);
		}
		else
		{
			cp = _calloc(i + 1, sizeof(char));
			if (cp)
			{
				for (j = 0, i--; i >= 0; j++, i--)
					cp[j] = bit[i];

				puts_buffer(stk, cp);
				free(cp);
			}
			else
				stk->error = 1;
		}
		free(bit);
	}
	else
		stk->error = 1;
}
