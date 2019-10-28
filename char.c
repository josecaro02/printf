#include "holberton.h"

void real_char(char *str, va_list valist, xbuf *buf)
{
	(void) str;
	char charls;
	char s[1];

	charls = va_arg(valist,int);
	s[0] = charls;
	if (*str == 'c')
	{
		string_to_buff(buf, s, 1);
	}
	else
	{
		s[0] = '%';
		string_to_buff(buf,s, 1);
	}
}
