#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, and fills it
 * with a specific values.
 * @size: the size of the array.
 * @c: the specific value.
 * Return: the pointer of the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);

	array = malloc(size * sizeof(char) + 1);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	array[i] = '\0';

	return (array);
}
