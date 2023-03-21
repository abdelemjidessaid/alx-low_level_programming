#include "main.h"

/**
 * print_alphabet_10x - prints alphabet in lower case
 * 10 times followed by new line
 */
void print_alphabet_10x(void)
{
	int i = 0;

	do {
		print_alphabet();
		i++;
	} while (i < 10);
}
