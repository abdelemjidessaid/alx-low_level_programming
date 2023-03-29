#include "main.h"
#include <string.h>

/**
 * find_much - finds the opposite letter
 * @l: letter included
 * Return: the opposite letter' ASCII
 */

int find_much(int l)
{
	int i;
	char *normal = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; i < 52; i++)
	{
		if (normal[i] == l)
			return (rot[i]);
	}

	return (l);
}

/**
 * rot13 - encodes string with rot13 encryption method
 * @s: string included
 * Return: modified string pointer's
 */

char *rot13(char *s)
{
	int i, len = strlen(s);
	char *t = s;

	for (i = 0; i < len; i++)
		t[i] = find_much(t[i]);

	return (s);
}
