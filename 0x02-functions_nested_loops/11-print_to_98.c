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
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for ( ; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}
	_putchar('\n');
}
