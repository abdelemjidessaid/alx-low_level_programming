#include "main.h"

/**
 * print_last_digit - return the last digit of a given number
 * @n: Given number
 * Return: one digit which the last of the given number
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n >= 0)
		_putchar(n + '0');
	else
	{
		_putchar((n * -1) + '0');
		_putchar((n * -1) + '0');
	}

	return (n);
}
