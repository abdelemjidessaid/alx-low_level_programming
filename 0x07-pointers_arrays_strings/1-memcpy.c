#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copy the n of bytes from
 * string to to another
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of bytes should be copied
 * Return: pointer of destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest, *s = src;
	unsigned int i = 0;

	while (i < n)
	{
		*d++ = *s++;
		i++;
	}

	return (dest);
}
