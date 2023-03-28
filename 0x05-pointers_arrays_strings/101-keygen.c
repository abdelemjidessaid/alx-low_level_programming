#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[100];
	int i, random = 0, summation = 0;

	srand(time(NULL));

	for (i = 0; summation <= 2644; i++)
	{
		random = (rand() % 25) + 65;

		str[i] = random;
		summation = summation + random;
	}

	str[i++] = 2772 - summation;
	str[i++] = '\0';

	printf("%s\n", str);

	return (0);
}
