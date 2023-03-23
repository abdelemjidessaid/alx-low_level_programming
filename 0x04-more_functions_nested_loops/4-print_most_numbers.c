#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - prints all numbers from 0 to 9
 * except 2 & 4, followed by new line
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
