#include "main.h"
#include <string.h>

/**
 * puts_half - prints the last half of a given string
 * @str: given string
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i = len % 2 == 0 ? (len / 2) : (len - 1) / 2;

	for ( ; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
