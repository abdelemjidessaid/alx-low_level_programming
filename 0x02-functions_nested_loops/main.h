#include <unistd.h>

#ifndef PRINT_ALPHABET
#define PRINT_ALPHABET
void print_alphabet();
#endif

int _putchar(char c);

/**
 * print_alphabet - prints all alphabet in lower case
 */
void print_alphabet()
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
