#include "main.h"
#include <string.h>

/**
 * string_toupper - converts strings to uppercase
 * @s: string included
 * Return: converted string pointer's
 */

char *string_toupper(char *s)
{
	char *p = s;

	do {
		if (*s >= 97 && *s <= 122)
			*s = *s - 32;
	} while (*p++);

	return (s);
}
