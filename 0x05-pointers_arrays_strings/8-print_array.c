#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a specified number of elements
 * that will be printed
 * @a: array of elements of type int
 * @n: number of elements that should be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(i + 1 >= n ? "%d" : "%d, ", a[i]);
	}
	printf("\n");
}
