#include "main.h"
#include <string.h>

/**
 * palindrome - check string if it is a palindrome
 * @s: given string
 * @i: start number
 * @j: end number
 * Return: 1 if palindrome, 0 otherwise.
 */

int palindrome(char *s, int i, int j)
{
	if (s[i] == '\0')
		return (1);
	else if (s[i] != s[j])
		return (0);
	return (palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - function that check string is palindrome
 * @s: given string
 * Return: 1 if string is palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int i = 0, j = strlen(s) - 1;

	if (*s == '\0')
		return (1);
	return (palindrome(s, i, j));
}
