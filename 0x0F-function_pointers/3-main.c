#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry point.
 * @argc: the number of arguments.
 * @argv: array of char arguments.
 * Return: Always 0 (success).
 */

int main(int argc, char **argv)
{
	int op_len, num_1, num_2, result;
	char *operator;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error %d \n", argc);
		exit (98);
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	operator = argv[2];
	op_len = strlen(operator);

	if (op_len != 1)
	{
		printf("Error\n");
		exit (99);
	}

	if ((operator[0] == '/' || operator[0] == '%') && num_2 == 0)
	{
		printf("Error\n");
		exit (100);
	}

	function = get_op_func(operator);
	if (function == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	result = function(num_1, num_2);
	printf("%d\n", result);

	return (0);
}
