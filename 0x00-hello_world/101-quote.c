#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char string[] = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";
const int len = strlen(string);
int i = 0;

	do {
		putchar((int) string[i]);
		i++;
	} while (i < len);
return (1);
}
