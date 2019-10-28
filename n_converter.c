#include "holberton.h"

void real_n_converter(char *str, va_list valist, xbuf *buf)
{
	unsigned int c;
	char *base_converted;
	
	
	c = va_arg(valist, unsigned int);
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
	string_to_buff(buf, base_converted, _strl(base_converted));
	free(base_converted);
}
