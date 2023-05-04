#include "main.h"

/**
 * power - function that calc power of number.
 * @num: the number.
 * @p: power.
 * Return: the number to the power of p.
 */
int power(int num, int p)
{
	int i, result = num;

	if (num == 0)
		return (0);
	if (num > 0 && p == 0)
		return (1);
	for (i = 0; i < p - 1; i++)
		result *= num;
	return (result);
}

/**
 * check_bin - function that checks bin code.
 * @b: pointer to a string that conatins the bin code.
 * Return: 1 if code is correct, 0 otherwise.
 */
int check_bin(const char *b)
{
	int i, len;

	if (!b)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);
	return (1);
}

/**
 * binary_to_uint - function that converts binary code to unsigned int.
 * @b: pointer to a string that contains the binary code.
 * Return: unsigned int number, 0 if b is NULL or doesn't contais a bin code.
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i, exponent, n;
	unsigned int number = 0;

	if (!check_bin(b))
		return (0);
	len = strlen(b);
	exponent = len - 1;
	for (i = 0; i < len; i++, exponent--)
	{
		n = b[i] - '0';
		n *= power(2, exponent);
		number += (unsigned int) n;
	}
	return (number);
}
