#include"main.h"

/**
 * print_binary - function to convert unsigned int to binary
 * @bin: argument
 */

void print_binary(bits_c, *bin)
{
	unsigned int num;
	int i = 0, int j = 0;
	char *bit, *cp;

	num = va_arg(*(bin->args), unsigned int);

	bit = _calloc(45, sizeof(char));
	if (bit)
	{
		while (num)
		{
			bit[i++] = ((num % 2) + '0');
			num /= 2;
		}
		if (i == 0)
		{
			bin->c0 = '0';
			write_buffer(bin);
		}
		else
		{
			cp = _calloc(i + 1, sizeof(char));
			if (cp)
			{
				for (j = 0, i--; i >= 0; j++, i--)
					cp[j] = bit[i];
				puts_buffer(bin, cp);
				free(cp);
			}
			else
				bin->error = 1;
		}
		free(bit);
	}
	else
		bin->error = 1;
}
