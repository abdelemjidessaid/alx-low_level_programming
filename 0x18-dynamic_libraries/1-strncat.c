#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: destination pointer to concatenate on.
 * @src: source pointer to get from.
 * @n: number of bytes
 * Return: destination pointer.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest), i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
