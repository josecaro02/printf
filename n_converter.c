#include "holberton.h"

/**
 *real_address - save in buffer the address of a variable if the flag
 *is p
 *@str: entered flag
 *@valist: entry variable
 *@buf: buffer to save the result
 *
 *Return: nothing, it's a void
 */
void real_address(char *str, va_list valist, xbuf *buf)
{
	unsigned long int int_add;
	char *tail_add;
	char *address;
	char head_add[] = "0x";
	(void) str;
	(void) buf;

	int_add = va_arg(valist, unsigned long int);
	tail_add = n_converter(int_add, 16, "0123456789abcdef");
	address = str_concat(head_add, tail_add);
	string_to_buff(buf, address, _strl(address));
	free(address);
}
