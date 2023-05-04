#include "main.h"

/**
 * print_binary - function that prints binary code of an unsigned  number.
 * @n: unsigned number.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 1, flag = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i < n)
		i <<= 1;
	while (i > 0)
	{
		if (!(n & i) && flag)
		{
			flag = 0;
			i >>= 1;
			continue;
		}
		else
			flag = 0;

		if (n & i)
			_putchar('1');
		else
			if (!flag)
				_putchar('0');
		i >>= 1;
	}
}
