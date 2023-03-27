#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by *src*
 * to the buffer pointed to by *dest*
 * @dest: destintion of copy
 * @src: source of copy
 * Return: string copied to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
