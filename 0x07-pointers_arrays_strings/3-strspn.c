#include "main.h"
#include <string.h>

/**
 * contains - function that checks if a given string
 * contains a char
 * @s: given string
 * @c: given character
 * Return: 1 if contains, 0 otherwise
 */

int contains(char *s, char c)
{
	int i, len = strlen(s);

	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
			return (1);
	}

	return (0);
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
	char *p = s;
	unsigned int count = 0;
	int i, j, len = strlen(p);

	for (i = 0; i < len; i++)
	{
		if (contains(accept, p[i]))
		{
			for (j = i; j < len; j++)
			{
			if (contains(accept, p[j]))
			{
				count++;
			}
			else
			{
				break;
			}
			}

			return (count);
		}
	}

	return (count);
}
