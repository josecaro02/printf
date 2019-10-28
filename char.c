#include "holberton.h"

void real_char(char *str, va_list valist, xbuf *buf)
{
	char charls;
	char s[1];
	(void) str;

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
