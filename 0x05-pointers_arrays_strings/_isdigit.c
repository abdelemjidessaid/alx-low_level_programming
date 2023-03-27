#include "main.h"

/**
 * _isdigit - check the char if it is digit
 * @c: given char
 * Return: 1 if char is contains digit, 0 otherwise
 */

int _isdigit(char c)
{
	int i = (int) c;

	if (i >= 48 && i <= 57)
		return (1);
	else
		return (0);
}
