#include "main.h"
#include <string.h>

/**
 * rev_string - reverses strings
 * @s: pointer of type char
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = strlen(s) - 1;

	for ( ; i < j; i++)
	{
		int temp = s[i];

		s[i] = s[j];
		s[j] = temp;

		j--;
	}
}
