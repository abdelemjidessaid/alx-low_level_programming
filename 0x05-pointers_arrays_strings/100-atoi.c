#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - converts the strings to integers
 * @s: given string
 * Return: the number
 */

int _atoi(char *s)
{
	int status = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			status *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * status);
}
