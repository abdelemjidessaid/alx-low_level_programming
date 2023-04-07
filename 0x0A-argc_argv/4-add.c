#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: arguments count.
 * @argv: char arguments.
 * Return: 0 always success.
 */

int main(int argc, char *argv[])
{
	int i, j, len, sum = 0, num;

	for (i = 1; i < argc; i++)
	{
		len = strlen(argv[i]);
		for (j = 0; j < len; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
