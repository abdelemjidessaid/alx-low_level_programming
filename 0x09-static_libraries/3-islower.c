#include "main.h"

/**
 * _islower - checks for lower case
 * Return: 1 if lower case, 0 otherwise
 * @c: The ASCII of letter
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
