#include "holberton.h"

/**
 *real_string - selects the correct function to print a string
 *@str: chracter to evaluate and select the correct function
 *@valist: array of arguments
 *@buf: structure of buffer
 *
 *Return: nothing, it's a void
 */
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
	if (*str == 'R')
	{
		string = rot13(string);
	}
	if (*str == 'S')
	{
		string = S(string);
	}
	string_to_buff(buf, string, _strl(string));
}
