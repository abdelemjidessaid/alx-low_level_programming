#include "main.h"

/**
 * factorial - function that returns the factorial
 * of a given number.
 * @n: given number
 * Return: -1 if given number is negative, 1 if 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (factorial(n - 1) * n);
}
