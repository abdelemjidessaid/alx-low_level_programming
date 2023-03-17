#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, x;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (x = 48; x <= 57; x++)
			{
				if (j > i && x > j)
				{
					putchar(i);
					putchar(j);
					putchar(x);
					if (i == 55 && j == 56 && x == 57)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
