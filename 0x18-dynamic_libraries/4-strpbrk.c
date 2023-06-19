#include "main.h"
#include <string.h>

/**
 * _contains - function that searches in a string for a char
 * @s: string to search on
 * @c: char to search for
 * Return: 1 if char is found, 0 otherwise
 */

int _contains(char *s, char c)
{
	int i, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
			return (1);
	}

	return (0);
}

/**
 * _strpbrk - function that searches a string
 * for any of a set of bytes
 * @s: given string
 * @accept: sequence of bytes that should search for
 * Return: pointer of first char found
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = s;
	int i, len = strlen(s);

	for (i = 0; i <= len; i++)
	{
		if (_contains(accept, p[i]))
			return (&p[i]);
	}

	return (NULL);
}
