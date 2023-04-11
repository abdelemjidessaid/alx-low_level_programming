#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - create allcated space in memory
 * and fill it with a specific string
 * @str: the specific string.
 * Return: the pointer of the memory space.
 */

char *_strdup(char *str)
{
	char *space;
	int len = strlen(str), i = 0;

	space = malloc(len * sizeof(char) + 1);
	if (space == NULL || *str == NULL)
		return (NULL);

	while (i < len)
	{
		space[i] = str[i];
		i++;
	}
	space[i] = '\0';

	return (space);
}
