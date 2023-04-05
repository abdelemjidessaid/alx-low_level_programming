#include "main.h"

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number.
 * @n: given number
 * Return: -1 if the number does not have a natural sqrt.
 */

int _sqrt_recursion(int n)
{
	int i = 2;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);

	while (i < n)
	{
		if (i * i == n)
			break;
		if (i * i > n)
			return (-1);
		i++;
	}

	return (i);
}
