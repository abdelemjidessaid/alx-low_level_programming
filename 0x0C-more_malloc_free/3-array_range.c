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
	p = malloc((max - min) * sizeof(int) + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0, m = min; i < (max - min); i++, m++)
		p[i] = m;
	p[i] = NULL;

	return (p);
}
