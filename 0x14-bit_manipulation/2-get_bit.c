#include "main.h"

/**
 * get_bit - function that returns the bit at a given index.
 * @n: the given number.
 * @index: the given index.
 * Return: the specific bit if possible, -1 otherwise.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
