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

	while (*dest)
		dest++;

	while (i < len)
	{
		*dest++ = *src++;
		i++;
	}

	*dest = '\0';

	return (dest);
}
