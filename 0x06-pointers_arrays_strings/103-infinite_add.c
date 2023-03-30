#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev - reverses strings
 * @str: string included
 * Return: string edited
 */
char *rev(char *str)
{
	int i = 0, j = strlen(str) - 1;
	int tmp;

	for ( ; i < j; i++, j--)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
	}

	return (str);
}

/**
 * infinite_add - function adds two large numbers from string
 * @s1: number one
 * @s2: number two
 * @r: string buffer
 * @size_r: the length of the string buffer
 * Return: string buffer pointer
 */
char *infinite_add(char *s1, char *s2, char *r, int size_r)
{
int i = strlen(s1) - 1, j = strlen(s2) - 1;
int rest = 0, tall = i > j ? i : j;
int na, nz, count = 0;
char *one = s1, *two = s2, *result = r;

for ( ; tall >= 0; tall--, i--, j--)
{
	if (i >= 0 && j >= 0)
	{
		na = (one[i] - 48);
		nz = (two[j] - 48);
		*result++ = ((na + nz + rest) % 10) + '0';
		rest = (na + nz + rest) / 10;
	}
	else
	{
	if (i < 0)
	{
		nz = (two[j] - 48);
		*result++ = ((nz + rest) % 10) + '0';
		rest = (nz + rest) / 10;
	}
	else
	{
		na = (one[i] - 48);
		rest = (na + rest) / 10;
		*result++ = ((na + rest) % 10) + '0';
	}
	}
	if (tall == 0 && rest > 0)
		*result++ = rest + '0';
	if (++count + 1 >= size_r)
		return (0);
}
*result++ = '\0';
rev(r);
return (r);
}
