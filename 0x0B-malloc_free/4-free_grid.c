#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a grid array.
 * @grid: 2D array pointer.
 * @height: height of the array.
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
