#include "main.h"

/**
 * more_numbers - prints number from 0 to 14 (10 times)
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, count;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i < 10 ? ((i % 10) + 48) : ((i / 10) + 48));

			if (i >= 10)
				_putchar((i % 10) + 48);
		}

		_putchar('\n');
	}
}
