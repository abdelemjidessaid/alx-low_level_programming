#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination pointer
 * @src: source to copy from
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int len = strlen(src), i = 0;
	char *p = dest;

	while (*p)
		p++;

	while (i < len)
	{
		*p++ = *src++;
		i++;
	}

	*p = '\0';

	return (dest);
}
