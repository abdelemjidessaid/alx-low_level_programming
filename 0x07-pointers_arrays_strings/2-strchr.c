#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a char in a string
 * @s: pointer of string
 * @c: character to locate for
 * Return: char in a string if found, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	char *p = s;
	unsigned int i = 0, len = strlen(s);

	while (i < len)
	{
		if (*p == c)
			return (p);
		p = &s[i];
		i++;
	}

	return (NULL);
}
