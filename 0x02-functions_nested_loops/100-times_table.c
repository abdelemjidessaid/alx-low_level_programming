#include "main.h"

/**
 * print_times_table - prints n time table
 * @n: table number
 * Return: void
 */
void print_times_table(int n)
{
	if (n > 0 && n <= 15)
	{
		int i, j;

		for (i = 0 ; i <= n; i++)
		{
			for (j = 0 ; j <= n; i++)
			{
				int mul = i * j;

				if (j > 0 && j < n)
					_putchar(',');

				if (mul >= 100)
				{
					int t = mul / 10;

					_putchar(' ');
					_putchar((t / 10) + 48);
					_putchar((t % 10) + 48);
					_putchar((mul % 10) + 48);
				}
				else if (mul >= 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mul / 10) + 48);
					_putchar((mul % 10) + 48);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + 48);
				}
			}
			_putchar('\n');
		}
	}
}
