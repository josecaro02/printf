#include "holberton.h"

void fill(char *buffer)
{
	int c;
	for (c = 0; c < BUF_SIZE; c++)
	{
		buffer[c] = '\0';
	}
}

void p_buffer(char *buffer, int size)
{
	if (size > BUF_SIZE)
	{
		size = size % BUF_SIZE;
	}
	if (size != 0)
	{
		write(1, buffer, size);
	}
}

xbuf *string_to_buff(xbuf *buf, const char *c, int size) 
{
	int loop, buff_pox;

	for(loop = 0, buff_pox = buf->buf_init_pox;loop < size;loop++)
	{
		if (buff_pox == BUF_SIZE)
		{
			p_buffer(buf->buffer, BUF_SIZE);
			fill(buf->buffer);
			buff_pox = 0;
		}
		buf->buffer[buff_pox] = c[loop];
		++buff_pox;
		++buf->n_chars;
	}
	buf->buf_init_pox = buff_pox;
	return (buf);
}

