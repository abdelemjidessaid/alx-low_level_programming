#include "main.h"

/**
 * clear_bit - function that sets value of 0 at a given index.
 * @n: pointer to the number.
 * @index: the given index.
 * Return: 1 if value changed, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
