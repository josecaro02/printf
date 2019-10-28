#include "holberton.h"

char *_new_pointer_str(char *str)
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

