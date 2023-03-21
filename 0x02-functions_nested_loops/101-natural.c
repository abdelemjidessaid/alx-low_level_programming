#include <stdio.h>

/**
 * main - summation of all multiplies of 3 and 5 until 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, result = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	}
	printf("%d\n", result);

	return (0);
}
