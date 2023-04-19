#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that takes a charsequence and function pointer
 * and calls this function from its pointer, then pass to it the charsequence
 * as a parameter.
 *
 * @name: charsequence that contains a name.
 * @f: is a function pointer.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
