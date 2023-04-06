#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments count.
 * @argv: char array of arguments.
 * Return: 0 always success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
