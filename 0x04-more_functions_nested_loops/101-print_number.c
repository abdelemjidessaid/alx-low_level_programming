#include "main.h"

/**
 * print_number - prints numbers with _putchar given function
 * @n: input number
 * Return: void
 */

void print_number(int n)
{
	int d, k;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	d = n / 10, k = d / 10;

	if (n < 10)
		_putchar('0' + n);
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >= 100 && n <= 1000)
	{
		_putchar((d / 10) + 48);
		_putchar((d % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else
	{
		_putchar((k / 10) + 48);
		_putchar((k % 10) + 48);
		_putchar((d % 10) + 48);
		_putchar((n % 10) + 48);
	}
}
