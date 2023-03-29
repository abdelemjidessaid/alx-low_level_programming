#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: string that need to copy from
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (dest);
}
