#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reversed order
 * @s: pointer of type char
 * Return: void
 */

void print_rev(char *s)
{
	int len = strlen(s) - 1;

	for ( ; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
