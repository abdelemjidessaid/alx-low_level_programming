#include "main.h"

/**
 * _isupper - checks if letter is upper case or not
 * @c: the input character
 * Return: 0 if upper case, 1 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
