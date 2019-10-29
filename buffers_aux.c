#include "holberton.h"

/**
 *fill - fill the buffer with '\0'
 *@buffer: buffer to save the printf strings
 *
 *Return: nothing, it's a void
 */
void fill(char *buffer)
{
	int c;

	for (c = 0; c < BUF_SIZE; c++)
	{
		buffer[c] = '\0';
	}
}

/**
 *p_buffer - prints the buffer
 *@buffer: buffer to save the printf strings
 *@size: size of printable character before '\0'
 *
 *Return: nothing, it's a void
 */
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

/**
 *string_to_buff - saves the strings into the buffer
 *@buf: structure of the buffer
 *@c: string to save into the buffer
 *@size: size of the string to save
 *
 *Return: structure of the buffer
 */
xbuf *string_to_buff(xbuf *buf, const char *c, int size)
{
	int loop, buff_pox;

	for (loop = 0, buff_pox = buf->buf_init_pox; loop < size; loop++)
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
