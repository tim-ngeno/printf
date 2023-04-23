#include "main.h"

/**
 * write_buffer - adds input char to buffer 1 at a time
 * @bits_c: the number of bits in the buffer
 * @bin: pointer to the buffer
 */

void write_buffer(unsigned int bits_c, unsigned int *bin)
{
	unsigned int old, new;
	char *temp;

	if (bin->buffer)
	{
		bin->buffer[bin->buf_index++] = bin->c0;
		while ((bin->buf_index + 1) % BUFSIZE == 0)
		{
			old = bin->buf_index + 1;
			new = old + BUFSIZE;
			temp = _realloc(bin->buffer, old, new);
			if (!temp)
			{
				bin->error = 1;
				break;
			}
			else
			{
				bin->buffer = temp;
			}
		}
	}
}

/**
 * puts_buffer - puts string into buffer
 * @bits_c: number of bits inside buffer
 * @bin: a pointer to the buffer
 * @str: string
 */

void puts_buffer(unsigned int bits_c, unsigned int *bin, char *str)
{
	int i, l;

	l = _strlen(str);

	for (i = 0; i < l; i++)
	{
		bin->c0 = str[i];
		write_buffer(bits_c, bin);
	}
}
