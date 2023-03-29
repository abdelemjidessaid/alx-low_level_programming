#include "main.h"
#include <string.h>

/**
 * is_lower - check characters is lower case
 * @l: is letter included
 * Return: 1 is lowercase, 0 otherwise
 */

int is_lower(int l)
{
	if (l >= 97 && l <= 122)
		return (1);
	return (0);
}

/**
 * is_special - check the special characters
 * @l: character included
 * Return: 1 if special character, 0 ohterwise
 */

int is_special(char l)
{
	if (l == ',' || l == ';'
		|| l == '.' || l == '!'
		|| l == '?' || l == '\"'
		|| l  == '(' || l == ')'
		|| l == '{' || l == '}'
		|| l == ' ' || l == '\t' || l == '\n'
	   )
	{
		return (1);
	}

	return (0);
}

/**
 * cap_string - capitalizes the words in a string
 * @s: string included
 * Return: pointer of string modified
 */

char *cap_string(char *s)
{
	char *a = s, current;
	int i, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		current = a[i];

		if (i > 0 && is_lower(current) && is_special(a[i - 1]))
			a[i] -= 32;
		else if (i == 0 && is_lower(current))
				a[i] -= 32;
	}

	return (s);
}
