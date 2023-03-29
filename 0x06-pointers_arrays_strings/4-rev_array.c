#include "main.h"

/**
 * reverse_array - function reverses the array of integers
 * @a: the array pointer's
 * @n: number of integers
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j = n - 1, tmp;

	for (i = 0; i < j; i++)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;

		j--;
	}
}
