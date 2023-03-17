#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count = 0;

while (count <= 9)
{
	int i = 48 + count;
	int s = i;

	do {
		putchar(i);

		if (i == 57)
		{
			i = 47;
		}
		i++;

		if (i != s)
		{
			putchar(',');
			putchar(' ');
		}
	} while (i != s);

	putchar('\n');
	count++;
}
	return (0);
}
