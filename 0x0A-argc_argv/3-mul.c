#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arguments count.
 * @argv: char array of arguments.
 * Return: 0 always success.
 */

int main(int argc, char *argv[])
{
	long mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	(void) argc;
	printf("%ld\n", mul);

	return (0);
}
