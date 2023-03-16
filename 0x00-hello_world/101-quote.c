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
int len = strlen(string);
int i;
for (i = 0; i < len; i++)
{
		putchar((int)string[i]);
}
return (1);
}
