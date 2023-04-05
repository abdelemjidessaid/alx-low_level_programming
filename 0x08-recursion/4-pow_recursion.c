#include "main.h"

/**
 * _pow_recursion - function that returns
 * a number to the power of y.
 * @x: the given number
 * @y: the power
 * Return: -1 if y is negative, 1 if y is zero
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (_pow_recursion(x, y - 1) * x);
}
