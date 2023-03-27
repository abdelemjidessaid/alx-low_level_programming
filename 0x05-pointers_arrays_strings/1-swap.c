#include "main.h"

/**
 * swap_int - swaps the values of two int variables using pointers
 * @a: pointer a of type int
 * @b: pointer b of type int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
