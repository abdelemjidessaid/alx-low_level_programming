#include "main.h"
#include <string.h>

/**
 * _strcmp - function compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 if two strings is equals to each other
 * negative value if s1 less than s2, positive otherwise
 */

int _strcmp(char *s1, char *s2)
{
	unsigned int one, two;
	int i, len = strlen(s1) < strlen(s2) ? strlen(s1) : strlen(s2);

	for (i = 0; i < len; i++)
	{
		one = s1[i];
		two = s2[i];

		if (one != two)
			return (one - two);
	}

	return (0);
}
