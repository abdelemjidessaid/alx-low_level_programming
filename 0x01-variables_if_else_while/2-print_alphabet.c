#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 97 + 26; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
