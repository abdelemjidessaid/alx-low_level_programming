#include "main.h"
#include <string.h>

/**
 * set_string - function that sets value of
 * a pointer to a char.
 * @s: char pointer target
 * @to: char pointer to copy from.
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
