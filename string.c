#include "holberton.h"


void real_string(char *str, va_list valist, xbuf *buf)
{
	char *string;
	(void) str;
	
	string = va_arg(valist, char *);
	if (string == NULL)
	{
		string = "(null)";
	}
	if (*str == 'r')
	{
		string = reversed_new_pointer_str(string);
	}
	string_to_buff(buf, string, _strl(string));
	
}
