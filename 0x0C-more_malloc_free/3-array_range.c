#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that allocates memory for array.
 * @min: minumum number.
 * @max: maximum number.
 * Return: pointer of array if success, NULL otherwise.
 */

int *array_range(int min, int max)
{
	int *p, i, m;

	if (min > max)
		return (NULL);
	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0, m = min; m <= max; i++, m++)
		p[i] = m;

	return (p);
}
