#include "holberton.h"

int _strl(const char *s)
{
	int c;

	for (c = 0; *(s + c); ++c)
	{}
	return (c);
}

int check_flag(char *s)
{
	char *flag = "+ -#0";
	
	while (*flag)
	{
		if (*flag == *s)
		{
			return (1);
		}
		++flag;
	}
	return (0);
}

int check_cformatter(char c)
{
	char formatters[] = "%cRrSbXxouidsp";
	int d;

	for (d = 0; d <= 13; d++)
	{
		if (c == formatters[d])
		{
			return (0);
		}
	}
		return (1);
}

char *strncpy_(char *loc, const char *stc, int c)
{
	int d;

	for (d = 0; d < c && *(stc + d); d++)
	{
		*(loc + d) = *(stc + d);
	}
	while (d < c)
	{
		*(loc + d++) = '\0';
	}
	return (loc);
}
char *takes_format_string(const char *format)
{
	int loop;
	char *formated_string;

	for (loop = 1; format[loop] == ' ' && format[loop]; loop++)
	{}
	formated_string = malloc((loop + 2) * sizeof(*formated_string));
	formated_string = strncpy_(formated_string, format, loop + 1);
	formated_string[loop + 1] = '\0';
	return (formated_string);
}

