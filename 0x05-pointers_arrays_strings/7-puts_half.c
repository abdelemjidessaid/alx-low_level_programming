#include "main.h"
#include <string.h>

/**
 * puts_half - prints the last half of a given string
 * @str: given string
 * Return: void
 */

void puts_half(char *str)
{
	int i = (strlen(str)) / 2, len = strlen(str);

	for ( ; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
