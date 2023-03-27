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
	char* numbers = trim_digits(s);
	int num = atoi(numbers);

	return (num);
}
