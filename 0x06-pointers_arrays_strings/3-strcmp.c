#include "main.h"
#include <string.h>

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if the two strings is equal,
 * -1 if s1 less than s2, 1 if s1 greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	const int len = strlen(s1) < strlen(s2) ? strlen(s1) : strlen(s2);
	unsigned int one, two;

	for (i = 0; i < len; i++)
	{
		one = s1[i];
		two = s2[i];

		if (one != two)
			return (one - two);
	}

	return (0);
}
