#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments count.
 * @argv: char array of arguments.
 * Return: 0 always success.
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
