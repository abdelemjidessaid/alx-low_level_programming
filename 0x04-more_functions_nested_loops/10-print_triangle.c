#include "main.h"

/**
 * print_triangle - prints triangle with character "#"
 * @size: number of character "#" should be printed
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar((j + i) >= size ? '#' : ' ');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
