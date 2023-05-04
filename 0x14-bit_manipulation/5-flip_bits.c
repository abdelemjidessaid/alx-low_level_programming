#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number one.
 * @m: number two.
 * Return: number of bits would need to flip from one to two.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	int count = 0;

	while (result)
	{
		if (result & 1)
			count++;
		result >>= 1;
	}
	return (count);
}
