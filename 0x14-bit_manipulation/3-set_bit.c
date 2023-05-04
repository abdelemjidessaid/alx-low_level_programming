#include "main.h"

/**
 * set_bit - function that sets a value of 1 at a given index.
 * @n: pointer to the number.
 * @index: given index.
 * Return: 1 if value changed, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned int) * 8) - 1))
		return (-1);
	*n |= (1 << index);
	return (1);
}
