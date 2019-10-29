#include "holberton.h"

/**
 *real_char - saves a char into a string and then into the buffer
 *@str: char with printf option
 *@valist: list of entry arguments
 *@buf: structure of the buffer
 *
 *Return: nothing, it's a void
 */
void real_char(char *str, va_list valist, xbuf *buf)
{
	char charls;
	char s[1];
	(void) str;

	charls = va_arg(valist, int);
	s[0] = charls;
	if (*str == 'c')
	{
		string_to_buff(buf, s, 1);
	}
	else
	{
		s[0] = '%';
		string_to_buff(buf, s, 1);
	}
}
