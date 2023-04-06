#include "main.h"
#include <string.h>

/**
 * _strncpy - this function copies strings from @src
 * to @dest with @n length of bytes
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of bytes
 * Return: destination pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

