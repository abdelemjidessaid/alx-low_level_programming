#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * if number is multiplies of 3 print Fizz
 * if number is multiplies of 5 print Buzz
 * if number is multiplies of 3 & 5 print FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

	printf("\n");

	return (0);
}
