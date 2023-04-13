#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using
 * C malloc function.
 * @b: unsigned int number of bytes.
 * Return: a pointer of the memory allocated.
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;
	
	pointer = malloc(b);
	if (pointer == NULL)
		exit (98);
	return (pointer);
}
