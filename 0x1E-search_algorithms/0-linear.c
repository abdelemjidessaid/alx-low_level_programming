#include "search_algos.h"


/**
 * linear_search - function that searches in an array for
 * a specific element, using linear algorithm.
 * @array: array of integers.
 * @size: the number of elements in array.
 * @value: the element we search for.
 * Return: the index of first element found, -1 otherwise.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
