#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - variadic function that prints all numbers provided
 * as parameters.
 * @separator: charsequence contains the separator between numbers.
 * @n: number of arguments provided.
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (separator != NULL && i + 1 < n)
			printf("%d%s", num, separator);
		else
			printf("%d", num);
	}
	printf("\n");
	va_end(ap);
}
