#include "holberton.h"

/**
 *_strl - Calc the size of a string
 *@s: string given by user
 *
 *Return: size of the s
 */
int _strl(const char *s)
{
	int c;

	for (c = 0; *(s + c); ++c)
	{}
	return (c);
}

/**
 *check_flag - check if the string has a flag
 *@s: string to check
 *
 *Return: 1 if there is a flag, 0 otherwise
 */
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

/**
 *check_cformatter - check if there is a allowed format after "%"
 *@c: char to test
 *
 *Return: 0 if the char is allowed, 1 otherwise
 */
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

/**
 *strncpy_ - copy a string
 *@loc: string to save the copt
 *@stc: string to copy
 *@c: quantity of characters to copy
 *
 *Return: new string loc with the copy of the string
 */
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

/**
 *takes_format_string - takes the pointer in the position after %
 *@format: format given by user that has the string to convert
 *
 *Return: new char with the pointer after the % char
 */
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
