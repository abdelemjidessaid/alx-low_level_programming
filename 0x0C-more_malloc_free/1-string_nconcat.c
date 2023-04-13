#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenate two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: number of bytes should allocated for the string two.
 * Return: pointer of the final string, NULL otherwise.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i, j, len, len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len2  = (unsigned int) strlen(s2);
	len = (unsigned int) strlen(s1);
	if (n > len2)
		n = len2;
	pointer = malloc(sizeof(s1) + n);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		pointer[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		pointer[i] = s2[j];
	pointer[i] = '\0';

	return (pointer);
}
