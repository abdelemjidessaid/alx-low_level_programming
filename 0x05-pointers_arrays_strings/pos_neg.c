#include "main.h"
#include <string.h>

/**
 * pos_neg - check number included in string
 * if is it positive or negative
 * @str: given string
 * Return: 1 if number is positive, 0 otherwise
 */

int pos_neg(char *str)
{
	int i, len = strlen(str), minus = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] == '-')
			minus++;
	}

	return (minus % 2 == 0);
}
