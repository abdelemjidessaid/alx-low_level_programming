#include "main.h"
#include <string.h>

/**
 * print_chessboard - function prints the chess board
 * @a: 2D array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j, len = sizeof(a) / sizeof(a[0][0]);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
