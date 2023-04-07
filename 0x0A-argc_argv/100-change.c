#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 * @argc: arguments count.
 * @argv: char array of arguments.
 * Return: 0 always success.
 */

int main(int argc, char *argv[])
{
	long num = 0, rest = 0;
	int i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		if (num >= coins[i])
		{
			result += num / coins[i];
			rest +=  num % coins[i];
			num = 0;
		}
		if (rest >= coins[i])
		{
			result += rest / coins[i];
			rest = rest % coins[i];
		}
	}

	printf("%d\n", result);

	return (0);
}
