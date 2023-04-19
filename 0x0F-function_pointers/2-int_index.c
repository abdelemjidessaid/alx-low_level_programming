#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that search in array of an element.
 *
 * @array: array of integers.
 * @size: the size of array.
 * @cmp: pointer of a function that compares the elements.
 * Return: the index of element if found, -1 otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
