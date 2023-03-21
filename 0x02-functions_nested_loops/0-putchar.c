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
	int i, len = strlen(content);

	for (i = 0; i < len; i++)
	{
		_putchar(content[i]);
	}

	return (0);
}
