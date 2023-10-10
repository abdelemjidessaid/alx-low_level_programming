#include "search_algos.h"


/**
 * print - function that prints all elements in an array
 * of integers.
 * @i: the index to start from.
 * @j: the index to end at.
 * @array: pointer to array of integers.
*/
void print(size_t i, size_t j, int *array)
{
	size_t a = i;

	printf("Searching in array:");
	for ( ; i <= j; i++)
	{
		if (a == i)
			printf(" %d", array[i]);
		else
			printf(", %d", array[i]);
		if (i == j)
			printf("\n");
	}
}

/**
 * binary_search - function that searches for an element
 * in array using binary search algorithm.
 * @array: array of integers.
 * @size: the number of elements in array.
 * @value: the element we searching for.
 * Return: the first index of element found, -1 otherwise.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, index;

	if (!array)
		return (-1);

	print(i, j, array);

	while (i < j)
	{
		index = (i + j) / 2;

		if (array[index] == value)
			return (index);
		else if (array[index] > value)
		{
			j = index - 1;
			print(i, j, array);
		}
		else
		{
			i = index + 1;
			print(i, j, array);
		}
	}

	return (-1);
}
