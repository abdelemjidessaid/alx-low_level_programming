#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory.
 * @nmem: number of members.
 * @size: size of each memeber.
 * Return: pointer if success, NULL otherwise.
 */

void *_calloc(unsigned int nmem, unsigned int size)
{
	void *p;

	if (size == 0 || nmem == 0)
		return (NULL);
	p = calloc(nmem, size);
	if (p == NULL)
		return (NULL);

	return (p);
}
