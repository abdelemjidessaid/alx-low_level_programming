#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a custom string buffer
 * @b: pointer of the string buffer
 * @size: size of the string buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int o = 0, j, i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i += 2)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf("  ");
			if ((i + 1) < j)
				printf("%02x ",
					*(b + o + i + 1));
			else
				printf("   ");
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + o + i);

			if (isprint(c))
				printf("%c", c);
			else
				printf(".");
		}
		printf("\n");
		o += 10;
	}
}
