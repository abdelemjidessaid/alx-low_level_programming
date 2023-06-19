#include "main.h"
#include <string.h>

/**
 * is_contains - searches for in a string for a substring
 * @s: pointer of string to search in.
 * @t: pointer of target string to search for.
 * Return: 1 if found, 0 otherwise.
 */

int is_contains(char *s, char *t)
{
	int i = 0, len = strlen(t);

	for (i = 0; i < len; i++)
	{
		if (s[i] != t[i])
			return (0);
	}

	return (1);
}

/**
 * _strstr - locates a substring in a string
 * @haystack: pointer of string
 * @needle: pointer of substring
 * Return: the pointer of the beginning of located substing
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = haystack, *n = needle;
	int i, len = strlen(p);

	for (i = 0; i < len; i++)
	{
		if (is_contains(&p[i], n))
			return (&p[i]);
	}

	return (NULL);
}
