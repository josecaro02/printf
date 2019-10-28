#include "holberton.h"

/**
 *str_concat - concatenate 2 strings
 *@s1: string number 1
 *@s2: string number 2
 *
 *Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *ar;

	if (s1 == NULL)
		size1 = 0;
	else
	{
		for (size1 = 0; s1[size1] != '\0'; size1++)
		{}
	}
	if (s2 == NULL)
		size2 = 0;
	else
	{
		for (size2 = 0; s2[size2] != '\0'; size2++)
		{}
	}
	ar = malloc((size1 + size2 + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (size1 + size2); i++)
	{
		if (i < size1)
		{
			ar[i] = *s1;
			s1++;
		}
		else if (i < size1 + size2)
		{
			ar[i] = *s2;
			s2++;
		}
	}
	ar[i] = '\0';
	return (ar);
}

void reconoced_format_string(char *change, xbuf *buf)
{
	int loop, size_change,flag;
	char charls;
	char str_char[1];

	loop = 0;
	size_change = _strl(change);
	flag = 0;
	if (*(change + size_change - 1) == '%' || *(change + size_change - 1) == ' ')
			{
				return;
			}
	while (loop < size_change)
	{
		if (*(change + 1) == ' ' && !flag)
		{
			str_char[0] = ' ';
			string_to_buff(buf,str_char, 1);
			flag = 1;
		}
		if (*(change + loop) != ' ')
		{
			charls = *(change + loop);
			str_char[0] = charls;
			string_to_buff(buf,str_char, 1);
		}
		loop++;
	}
}

char *reversed_new_pointer_str(char *str)
{
	char *copy;
	unsigned int size, size2,loop;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strl(str) - 1;
	size2 = size + 1;
	copy = malloc(size * sizeof(*copy));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (loop = 0; loop < size2; loop++)
	{
		copy[loop] = str[size--];
	}
	return (copy);
}
