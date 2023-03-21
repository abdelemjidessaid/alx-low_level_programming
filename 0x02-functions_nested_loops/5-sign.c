#include "main.h"

/**
 * print_sign - print the sign of number
 * @n: input number
 * Return: 1 if number more than or equal 1, 0 if number
 * equal 0, -1 otherwise
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
