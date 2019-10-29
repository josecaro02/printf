#include "holberton.h"

/**
 *s_func - function that selects the correct function to return
 *in base of the character c that the user gives
 *@c: character to find in the array of structures
 *
 *Return: nothing, it's a void
 */
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
		{'p', real_n_converter},
		{'d', real_number},
		{'i', real_number},
		{'R', real_string},
		{'S', real_string}
	};
	int d;

	d = 0;
	while (d < 14)
	{
		if (function[d].format == c)
		{
			return (function[d].create);
		}
		d++;
	}
	return (NULL);
}
