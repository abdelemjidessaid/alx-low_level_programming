#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
 * print_buffer - function that prints a string buffer
 * @b: string buffer pointer
 * @size: the size of buffer in bytes
 * Return: void
 */

void print_buffer(char *b, int size)
{
int i, j;

for (j = 0; j < size; j += 10)
{
	/* print index of this line in hexadecimal */
	printf("%08x: ", j);

	/* print 2 characters in hexadecimal */
	for (i = j; i < (j + 10); i += 2)
	{
		if (i < size)
			printf("%02x", b[i]);
		else
			printf("  ");
		if ((i + 1) < size)
			printf("%02x ", b[i + 1]);
		else
			printf("   ");
	}

	/* print the character if it is printable */
	for (i = j; i < (j + 10); i++)
	{
	if (i < size)
		printf("%c", isprint(b[i]) ? b[i] : '.');
	else
		printf(" ");
	}

	printf("\n");
}
if (size <= 0)
	printf("\n");
}
