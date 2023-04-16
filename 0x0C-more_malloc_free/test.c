#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *rev(char *s)
{
	int i, j, len = strlen(s);
	char *p = s, tmp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		tmp = p[i];
		p[i] = p[j];
		p[j] = tmp;
	}

	return (p);
}


char *fill(char *s, int amount)
{
	char *p;
	int i, len = strlen(s), j = 0;

	printf("fill realloc\n");
	p = malloc(len + amount + 1);
	if (s != NULL)
	{
		for (i = 0; i < amount; i++)
			p[i] = '0';
		for (; i < (len + amount); i++)
			p[i] = s[j++];
		p[i] = '\0';
	}

	return (p);
}

/**
 * calc - function that multiplies a number by a line of numbers
 * @s: array of char.
 * @n: number.
 * @index: index to start from to save numbers in array.
 * Return: pointer of array of char.
 */
char *calc(char *s, int n, int index)
{
	int len = strlen(s), i, result, rest = 0, n2, save;
	char *line = malloc(len + 1);
	line[len] = '\0';

	for (i = 0; i < len; i++)
	{
		n2 = s[len - 1 - i] - '0';
		result = n * n2 + rest;
		save = result % 10;
		rest = result / 10;
		if (i + 1 == len && rest > 0)
		{
			line[i] = save + '0';
			line[i + 1] = rest + '0';
		}
		else
			line[i] = save + '0';
	}
	if (rest > 0)
	{
		line = realloc(line, len + 2);
		line[i + 2] = '\0';
	}
	printf("%s\n", line);
	if (index > 0)
		line = fill(line, index);

	return (rev(line));
}

int main() {
    char *one = "999999999999999999999999999999";
	char *result = calc(one, 9, 50);
    printf("%s\n", result);

    return (0);
}