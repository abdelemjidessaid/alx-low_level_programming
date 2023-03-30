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
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + 48);

}
