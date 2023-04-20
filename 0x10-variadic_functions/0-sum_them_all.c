#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that calculates the summation of all numbers
 * that provided as parameters.
 * @n: number of parameters provided.
 * Return: 0 if @n is 0, otherwise the summation of all numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
		return (0);


	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
