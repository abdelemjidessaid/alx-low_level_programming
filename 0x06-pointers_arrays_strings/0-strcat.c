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
	char cur;
	while (*dest)
		dest++;
	cur = *src++;

	while (cur != '\0')
	{
		*dest++ = cur;
		cur = *src++;
	}

	*dest = '\0';

	return (dest);
}
