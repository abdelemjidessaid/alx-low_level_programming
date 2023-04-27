#include <stdio.h>

void __attribute__((constructor)) always_first(void);

/**
 * always_first - function that will be called before the main function.
 *
 * Return: void.
 */
void always_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
