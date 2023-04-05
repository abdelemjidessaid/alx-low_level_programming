#include "main.h"

/**
 * find_root - function that finds sqrt of number
 * @n: given number
 * @g: guess number
 * Return: root
 */

int find_root(int n, int g)
{
	if (g * g == n)
		return (g);
	else if (g * g < n)
		return (find_root(n, g + 1));

	return (-1);
}

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number.
 * @n: given number
 * Return: -1 if the number does not have a natural sqrt.
 */

int _sqrt_recursion(int n)
{
	int g = 2;

	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	return (find_root(n, g));
}
