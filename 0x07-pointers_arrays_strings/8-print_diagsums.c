#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - function that
 * prints the diagnols summations
 * @a: 2D array of integers
 * @size: the length of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, one = 0, two = 0;

	for (i = 0; i < size; i++)
	{
		one += *(a + (size * i) + i);
		two += *(a + (size * i) + (size - i - 1));
	}

	printf("%d, %d\n", one, two);
}
