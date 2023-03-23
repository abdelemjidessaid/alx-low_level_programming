#include "main.h"

/**
 * _isdigit - checks if the input is digit or not
 * @c: the input ASCII
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
