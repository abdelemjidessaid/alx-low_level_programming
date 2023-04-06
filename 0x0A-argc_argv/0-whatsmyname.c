#include <stdio.h>

/**
 * main - Entry point
 * @argc: the count of elements in @argv.
 * @argv: string array of elements that passed from command
 * line.
 * Return: 0 Always success.
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
