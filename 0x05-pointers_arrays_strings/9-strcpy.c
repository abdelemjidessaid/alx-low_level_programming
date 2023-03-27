#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by *src*
 * to the buffer pointed to by *dest*
 * @dest: destintion of copy
 * @src: source of copy
 * Return: string copied to dest
 */

char* _strcpy(char *dest, char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		dest[i] = str[i];
	}

	return (dest);
}
