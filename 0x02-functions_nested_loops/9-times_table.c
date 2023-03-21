#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int r = (i * j);
			
			if (j > 0)
			{
				_putchar(' ');
				if (r < 10)
					_putchar(' ');
				else
					_putchar((r / 10) + 48);
				_putchar((r % 10) + 48);
			}
			else
				_putchar('0');
			_putchar(',');
		}
		_putchar('\n');
	}

}
