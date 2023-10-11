#include "search_algos.h"


/**
 * interpolation_search - function that looks for an element in an array
 * using the Interpolation Search Algorithm.
 * @array: the list of elements which is array of numbers.
 * @size: the number of elements.
 * @value: the element we looking for.
 * Return: the first index of element found, -1 otherwise.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, i;

	if (!array || size == 0)
		return (-1);

	while (l <= r)
	{
		i = (r - l) / (array[r] - array[l]) * (value - array[l]);
		printf("Value checked array[%ld]", i);
		if (i >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[i]);

		if (array[i] == value)
			return ((int) i);
		else if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
