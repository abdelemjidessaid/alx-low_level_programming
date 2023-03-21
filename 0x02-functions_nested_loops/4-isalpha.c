#include "main.h"

/**
 * _isalpha - checks for alphabets (lower & upper) case
 * @c: ASCII of letter
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
