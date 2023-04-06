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
	int mul = atoi(argv[1]) * atoi(argv[2]);

	(void) argc;
	printf("%d\n", mul);

	return (0);
}
