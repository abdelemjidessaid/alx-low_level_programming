#include "main.h"
#include <string.h>

/**
 * find_leet - function that finds to encode the characters
 * @l: character included
 * Return: the ASCII of encoded character
 */

int find_leet(char l)
{
	int i;
	char let[] = "AELOT";
	char _let[] = "aelot";
	char enc[] = "43107";

	for (i = 0; i < 5; i++)
	{
		if (let[i] == l || _let[i] == l)
			return (enc[i]);
	}

	return (l);
}

/**
 * leet - function that encodes strings into 1337
 * @s: included string
 * Return: modified string pointer
 */

char *leet(char *s)
{
	char *original = s;
	int i, len = strlen(original);

	for (i = 0; i < len; i++)
	{
		original[i] = find_leet(original[i]);
	}

	return (s);
}
