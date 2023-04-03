#include "main.h"
#include <string.h>

/**
 * find_index - function that finds
 * the index of a char in a given string
 * @s: given string
 * @c: the target character
 * Return: index of character if found, -1 otherwise
 */

int find_index(char *s, char c)
{
	char *p = s;
	int i, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (*p == c)
			return (i);
		p++;
	}

	return (-1);
}

/**
 * _strspn - function that gets the length
 * of a prefix substring.
 * @s: pointer of the original string
 * @accept: pointer of the substring
 * Return: length of the acceptable substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int start = find_index(s, accept[0]);
	int end = find_index(s, accept[strlen(accept) - 1]);
	int st = start < end ? start : end;
	int ed = start < end ? end : start;

	count = (ed - st) + 1;

	return (count);
}
