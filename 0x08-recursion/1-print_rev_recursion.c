#include "main.h"


/**
 * _print_rev_recursion - funtion that prints
 * a string in reverse
 * @s: string pointer.
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(++s);
	_putchar(*(s - 1));
}
