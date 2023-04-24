/**
 * write_buffer - adds a character to buffer
 * @stk: arguments
 */
void write_buffer(stock_t *stk)
{
	unsigned int old, new;
	char *temp;

	if (stk->buffer)
	{
		stk->buffer[stk->buf_index++] = stk->c0;

		if ((stk->buf_index + 1) % BUFSIZE == 0)
		{
			old = stk->buf_index + 1;
			new = old + BUFSIZE;
			temp = _realloc(stk->buffer, old, new);
			if (!temp)
				stk->error = 1;
			else
				stk->buffer = temp;
		}
	}
}

/**
 * puts_buffer - prints string to buffer
 * @stk: arguments
 * @str: string to print
 */
void puts_buffer(stock_t *stk, char *str)
{
	int i, l;

	l = _strlen(str);

	for (i = 0; i < l; i++)
	{
		stk->c0 = str[i];
		write_buffer(stk);
	}
}
