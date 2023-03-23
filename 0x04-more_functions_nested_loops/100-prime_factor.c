 #include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long num = 612852475143, i;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%lu\n", num / i);
			break;
		}
	}

	return (0);
}
