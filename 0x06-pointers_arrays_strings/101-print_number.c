#include "main.h"
#include <string.h>

/**
 * print_number - functions that prints numbers
 * using just _putchar function
 * @n: included number
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + 48);

}
