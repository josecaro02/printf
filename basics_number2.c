#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *digits - calc the number of digits
 *@num: number to convert
 *
 *Return: the quantity of digits of a number
 */
int digits(int num)
{
	int digit;

	digit = 0;
	while (num != 0)
	{
		num = num / 10;
		digit++;
	}
	return (digit);
}

/**
 *int_to_str - converts a integer into string
 *@num: number to convert
 *@str: string to save the number
 *@digit: quantity of digits
 *
 *Return: Return 0, success
 */
int int_to_str(int num, char *str, int digit)
{
	int i;

	i = 0;
	while (num)
	{
		str[i++] = (num % 10) + '0';
		num = num / 10;
	}
	while (i < digit)
		str[i++] = '0';
	reverse_numbers(str, i);
	str[i] = '\0';
	return (0);
}

/**
 *real_number - converts a num into string, allocate the size the char
 *@str: string with character after % - unused
 *@valist: valist with the argument - number - to convert into string and save
 *to the buffer
 *@buf: buffer to save the string of the number
 *
 *Return: Nothing, it's a void
 */
void real_number(char *str, va_list valist, xbuf *buf)
{
	int digit, num, flag;
	char *str_num;
	char *str_n_num;
	char negative[2];

	(void) str;
	flag = 0;
	negative[0] = '-';
	negative[1] = '\0';
	num = va_arg(valist, int);
	if (num < 0)
	{
		num = num * -1;
		flag = 1;
	}
	digit = digits(num);
	str_num = malloc((digit + 1) * sizeof(char));
	int_to_str(num, str_num, digit);
	if (flag == 1)
	{
		str_n_num = malloc((digit + 2) * sizeof(char));
		str_n_num = str_concat(negative, str_num);
		string_to_buff(buf, str_n_num, _strl(str_n_num));
	}
	else
		string_to_buff(buf, str_num, _strl(str_num));
	free(str_num);
}
