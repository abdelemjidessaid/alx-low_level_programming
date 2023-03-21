#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from a given number to 98
 * @n: given number
 * Return: void
 */
void print_to_98(int n)
{
	int i = n;

	if (n > 98)
	{
		for ( ; i >= 98; i--)
		{
			if (i > 100)
			{
				int d = (i / 10);

				_putchar((i / 10) + 48);
				_putchar((d / 10) + 48);
				_putchar((i % 10) + 48);
			}
			else
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for ( ; i <= 98; i++)
		{
			int d;

			if (i < 0)
			{
				d = i * -1;
				_putchar('-');
				
				if (d >= 10)
					_putchar((d / 10) + 48);
				_putchar((d % 10) + 48);
			}
			else
			{
				if (i >= 10)
					_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
