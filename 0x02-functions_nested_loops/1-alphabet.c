#include "print_alphabet.h"
#include <stdio.h>

/**
 * print_alphabet - prints all alphabet with lower case
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
