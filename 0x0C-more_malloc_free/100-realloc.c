#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates memory of a pointer
 * @ptr: the pointer
 * @old_size: the size of the pointer
 * @new_size: the size should applied to the pointer.
 * Return: new pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	p = malloc(new_size);
	if (p != NULL)
	{
		memcpy(p, ptr, old_size < new_size ? old_size : new_size);
		free(ptr);
	}
	else
		return (NULL);

	return (p);
}
