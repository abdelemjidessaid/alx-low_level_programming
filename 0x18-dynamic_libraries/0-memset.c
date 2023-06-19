#include "main.h"
#include <string.h>

/**
 * _memset - functions that fills n bytes
 * of area of string pointer
 * @s: string included
 * @b: byte of data that string will fill's of
 * @n: number of byte that should filled
 * Return: pointer of string included
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		p[i] = b;

	return (s);
}
