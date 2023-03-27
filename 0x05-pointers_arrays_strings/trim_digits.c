#include "main.h"
#include <string.h>

/**
 * trim_digits - clac digits that included in a string
 * @str: string
 * Return: the string contains just digits
 */

char* trim_digits(char *str)
{	
	int pos = pos_neg(str);
	int i, len = strlen(str), index = 0;
	int digit_count = calc_digits(str);
	char *digits[pos ? digit_count : digit_count + 1];

	if (!pos)
	{
		*digits[0] = '-';
		index++;
	}

	for (i = 0; i < len; i++)
	{
		if (_isdigit(str[i]))
		{
			digits[index];
			index++;
		}
	}

	return (digits);
}
