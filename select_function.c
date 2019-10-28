#include "holberton.h"

void (*s_func(char c))(char *f, va_list, xbuf *)
{
	v_string function[] = {
		{'r', real_string},
		{'u', real_n_converter},
		{'o', real_n_converter},
		{'s', real_string},
		{'x', real_n_converter},
		{'X', real_n_converter},
		{'b', real_n_converter},
		{'%', real_char},
		{'c', real_char},
		{'p', real_address}
	};
	int d;
	
	d = 0;
	while(d < 11)
	{
		if (function[d].format == c)
		{
			return (function[d].create);
		}
		d++;
	}
	return (NULL);
}
