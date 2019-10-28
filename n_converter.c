#include "holberton.h"
/**
 *real_n_converter - save in buffer any base convertion
 *is p
 *@str: entered flag
 *@valist: entry variable
 *@buf: buffer to save the result
 *
 *Return: nothing, it's a void
 */
void real_n_converter(char *str, va_list valist, xbuf *buf)
{
	unsigned long int c;
	char *base_converted;
	char *tail_add;
	char head_add[] = "0x";

	c = va_arg(valist, unsigned long int);
	if (*str == 'x')
		base_converted = n_converter(c, 16 , "0123456789abcdef");
	if (*str == 'X')
		base_converted = n_converter(c, 16 , "0123456789ABCDEF");
	if (*str == 'b')
		base_converted = n_converter(c, 2, "01");
	if (*str == 'o')
		base_converted = n_converter(c, 8 , "01234567");
	if (*str == 'u')
 		base_converted = n_converter(c, 10, "0123456789");
	if (*str == 'p')
	{
		tail_add = n_converter(c, 16, "0123456789abcdef");
		base_converted = str_concat(head_add, tail_add);
	}
	string_to_buff(buf, base_converted, _strl(base_converted));
	free(base_converted);
}
