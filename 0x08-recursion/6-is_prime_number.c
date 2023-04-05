#include "main.h"

/**
 * prime - function that finds the prime numbers
 * @n: given number
 * @g: guess number
 * Return: 1 if number is prime, 0 otherwise.
 */

int prime(int n, int g)
{
	if (n % g == 0 && g != 1)
		return (0);
	else if (g == 1)
		return (1);
	return (prime(n, g - 1));
}


/**
 * is_prime_number - function that checks number
 * if it is prime or not.
 * @n: given number.
 * Return: 1 if number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
