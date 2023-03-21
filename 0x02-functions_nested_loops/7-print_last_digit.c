#include "main.h"

/**
 * print_last_digit - return the last digit of a given number
 * @n: Given number
 * Return: one digit which the last of the given number
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n %= 10;
		_putchar('0' + n);
	}
	else
	{
		n %= 10;
		n *= -1;
		_putchar('0' + n);
	}

	return (n);
}
