#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char content[] = "_putchar\n";
	int i;

	for (i = 0; i < strlen(content); i++)
	{
		_putchar(content[i]);
	}

	return (0);
}
