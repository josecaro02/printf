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
        printf("number in string: %s",str);
        return(0);
}

/**
 *malloc_num - converts a num into string, allocate the size the char
 *@num: num to converter
 *
 *Return: 0 success
 */
int malloc_num(int num)
{
	int digit;
	char *str_num;
	digit = digits(num);
	str_num = malloc(digit + 1 * sizeof(char));
	int_to_str(num, str_num, digit);
	free(str_num);
	return (0);
}
