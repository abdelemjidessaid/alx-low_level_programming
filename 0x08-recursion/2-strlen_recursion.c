#include "main.h"

/**
 * _strlen_recursion - function that returns
 * the length of a given string.
 * @s: string pointer.
 * Return: the length of the given string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(++s) + 1);
}
