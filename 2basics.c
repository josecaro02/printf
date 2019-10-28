#include "holberton.h"

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

