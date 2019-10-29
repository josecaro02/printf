#include "holberton.h"

/**
 *_new_pointer_str - copy a pointer
 *@str: string to copy
 *
 *Return: a string copied
 */
char *_new_pointer_str(char *str)
{
	char *copy;
	unsigned int size, size2, loop;

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

/**
  * *rot13 - Encodes a string in rot13
  * @str: Char to encode
  *
  * Return: string encoded
  */
char *rot13(char *str)
{
	int c, d, size;
	char letters[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char replace[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strl(str);
	copy = malloc(size * sizeof(*copy));
	if (copy == NULL)
		return (NULL);
	for (d = 0; d < size ; d++)
	{
		for (c = 0 ; letters[c]; c++)
		{
			if (copy[d] == letters[c])
			{
				copy[d] = replace[c];
				break;
			}
			copy[d] = str[d];
		}
	}
	return (copy);
}

/**
 *S - converts unprintable characters of a string into \x
 *@str: string to copy
 *
 *Return: string converted
 */
char *S(char *str)
{
	char *copy;
	int size, s_times, loop, loop2;
	unsigned char charls;

	size = _strl(str);
	for (loop = 0; str[loop]; loop++)
	{
		charls = (unsigned char)str[loop];
		if ((charls > 0 && charls < 32) || charls > 126)
			s_times++;
	}
	size += (s_times * 3);
	copy = malloc(size * sizeof(*copy));
	if (copy == NULL)
		return (NULL);
	for (loop = 0, loop2 = 0; str[loop]; loop++, loop2++)
	{
		charls = (unsigned char)str[loop];
		if ((charls > 0 && charls < 32) || charls > 126)
		{
			copy[loop2] = '\\';
			copy[loop2 + 1] = 'x';
			if (charls % 16 < 10)
				copy[loop2 + 3] = charls % 16 + '0';
			else
				copy[loop2 + 3] = charls % 16 + '7';
			charls /= 16;
			if (charls < 10)
				copy[loop2 + 2] = charls + '0';
			else
				copy[loop2 + 2] = charls + '7';
			loop2 += 3;
		}
		else
			copy[loop2] = (char)charls;

	}
	copy[loop2] = '\0';
	return (copy);
}
