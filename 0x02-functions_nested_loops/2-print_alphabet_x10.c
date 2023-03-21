#include "main.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - prints alphabet in lower case
 * 10 times followed by new line
 */
void print_alphabet_x10(void)
{
	int i = 0;

	do {
		print_alphabet();
		i++;
	} while (i < 10);
}
