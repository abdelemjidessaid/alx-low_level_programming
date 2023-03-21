#include "main.h"

/**
 * print_times_table - prints n time table
 * @n: table number
 * Return: void
 */
void print_times_table(int n)
{
	if (n <= 15 && n > 0)
	{
		int i = j = 0;

		for ( ; i <= n; i++)
		{
			for ( ; j <= n; i++)
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
				else if (d >= 10)
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
