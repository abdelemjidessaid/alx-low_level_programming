#include "3-calc.h"

/**
 * op_add - function that summates two numbers.
 * @a: number one.
 * @b: number two.
 * Return: the result of summation.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two numbers.
 * @a: number one.
 * @b: number two.
 * Return: the result of subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplicates  two numbers.
 * @a: number one.
 * @b: number two.
 * Return: the result of multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two numbers.
 * @a: number one.
 * @b: number two.
 * Return: the result of division.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that divides two numbers and returns the rest of division.
 * @a: number one.
 * @b: number two.
 * Return: the rest of division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
