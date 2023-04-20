#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_strings - is a variadic function that prints all strings provided
 * as parameters separated by @separator.
 * @separator: charsequence separator.
 * @n: number of arguments.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";
		if (separator == NULL || i + 1 == n)
			printf("%s", s);
		else
			printf("%s%s", s, separator);
	}
	va_end(ap);
	printf("\n");
}
