#include "main.h"
#include <string.h>

/**
 * calc_digits - calculate the number of digits included
 * in a string
 * @str: given string
 * Return: the number of digits
 */

int calc_digits(char *str)
{
	int size = 0, i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (_isdigit(str[i]))
			size++;
	}

	return (size);
}
