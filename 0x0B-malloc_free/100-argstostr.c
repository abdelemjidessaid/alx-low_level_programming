#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates array of strings.
 * @ac: size of the array.
 * @av: the array of strings.
 * Return: pointer the new string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, x = 0, len = 0;
	char *string;

	if (ac == 0 || *av == NULL)
		return (NULL);
	/* init summation of all strings */
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;
	/* init the new string */
	string = malloc(len * sizeof(char) + 1);
	if (string == NULL)
	{
		free(string);
		return (NULL);
	}
	/* start fillig the final string */
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			string[x++] = av[i][j];
		}
		string[x++] = '\n';
	}
	string[x] = '\0'; 

	return (string);
}
