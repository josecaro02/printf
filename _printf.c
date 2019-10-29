#include "holberton.h"

/**
 *_printf - principal function of printf
 *@format: entry argument of the print f and first of variadic func
 *
 *Return: size of the string printed
 */
int _printf(const char *format, ...)
{
	xbuf buf;
	va_list list;
	int loop, size_change;
	char *change;

	if (format == NULL)
		return (-1);
	fill(buf.buffer);
	buf.n_chars = 0;
	buf.buf_init_pox = 0;
	va_start(list, format);
	loop = 0;
	while (format[loop])
	{
		if (format[loop] != '%')
		{
			string_to_buff(&buf, format + loop, 1);
			loop += 1;
		}
		if (format[loop] == '%')
		{
			change = takes_format_string(format + loop);
			size_change = _strl(change);
			if (size_change == 1 ||
			    check_cformatter(change[size_change - 1]))
			{
				reconoced_format_string(change, &buf);
			}
			else
			{
				s_func(change[size_change - 1])
					(change + 1, list, &buf);
			}
			free(change);
			loop += size_change;
		}
	}
	p_buffer(buf.buffer, buf.buf_init_pox);
	va_end(list);
	return (buf.n_chars);
}
