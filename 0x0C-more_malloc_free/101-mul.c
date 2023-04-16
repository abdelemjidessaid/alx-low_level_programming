#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * check_digits - function that checks a string if contains just degits.
 * @s: string.
 * Return: 1 if contains just digits, 0 otherwise.
 */
int check_digits(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * allocate - function that creates 2D array of char,
 * to save the lines of multiplication.
 * @len: length of space to allocate.
 * Return: pointer of 2D array.
 */
char **allocate(int len)
{
	char **p;
	int i;

	p = malloc(len * sizeof(char *) + 1);
	for (i = 0; i < len; i++)
		p[i] = malloc(sizeof(char *));
	if (p != NULL)
		p[i] = NULL;

	return (p);
}

/**
 * rev - function to reverse the array of char.
 * @s: array of char.
 * Return: array of char after reverse.
 */
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

/**
 * reallocate - function that reallocate memory by increasing it with one byte
 * @s: pointer of char.
 * Return: pointer of char after increasing memory.
 */
char *reallocate(char *s, int addition)
{
	char *p;
	int size = strlen(s) + 1;

	p = realloc(s, (int) size + addition);
	return (p);
}

/**
 * summation - function that do summation for illimit numbers
 * from two char arrays.
 * @s1: string one.
 * @s2: string two.
 * Return: char pointer which contains the result.
 */
char *summation(char *s1, char *s2)
{
	char *final;
	int rest = 0, i, j, n1, n2, len, len1, len2, lng, index, x = 0;

	i = len1 = strlen(s1) - 1;
	j = len2 = strlen(s2) - 1;
	index = lng = len1 > len2 ? len1 : len2;
	final = malloc(lng * sizeof(char) + 1);
	for ( ; index >= 0; index--, i--, j--, x++)
	{
		len = strlen(final);
		if (len >= lng)
			final = realloc(final, len + 2);
		if (i >= 0 && j >= 0)
		{
			n1 = (s1[i] - 48);
			n2 = (s2[j] - 48);
			final[x] = ((n1 + n2 + rest) % 10) + '0';
			rest = (n1 + n2 + rest) / 10;
		}
		else
		{
			if (i < 0)
			{
				n2 = (s2[j] - 48);
				final[x] = ((n2 + rest) % 10) + '0';
				rest = (n2 + rest) / 10;
			}
			else if (j < 0)
			{
				n1 = (s1[i] - 48);
				final[x] = ((n1 + rest) % 10) + '0';
				rest = (n1 + rest) / 10;
			}
		}
		if (index == 0 && rest > 0)
			final[x + 1] = (rest + '0');
	}
	final[x + 1] = '\0';
	return (rev(final));
}

/**
 * fill - function that fills array of char with zeros.
 * @s: char array.
 * @amount: number of zeros.
 * Return: char array pointer.
 */
char *fill(char *s, int amount)
{
	char *p;
	int i, len = strlen(s), j = 0;

	p = malloc(len + amount + 1);
	if (s != NULL)
	{
		for (i = 0; i < amount; i++)
			p[i] = '0';
		for (; i < (len + amount); i++)
			p[i] = s[j++];
		p[i] = '\0';
	}
	free(s);

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
			line = realloc(line, len + 2);
			line[i + 2] = '\0';
			line[i] = save + '0';
			line[i + 1] = rest + '0';
		}
		else
			line[i] = save + '0';
	}
	if (rest == 0)
		line[i] = '\0';
	if (index > 0)
		line = fill(line, index);

	return (rev(line));
}

/**
 * mul - function that multiplay two numbers.
 * @one: string that contains the number one.
 * @two: string that contains the number two.
 * Return: array of char contains the result.
 */
char *mul(char *one, char *two)
{
	int i, len1, num;
	char **lines, *str, *last;

	len1 = strlen(one);
	lines = allocate(len1);

	for (i = 0; i < len1; i++)
	{
		num = one[len1 - 1 - i] - '0';
		str = calc(two, num, i);
		lines[i] = str;
	}

	last = *lines++;
	while (*lines)
		last = summation(last, *lines++);
	return (last);
}

/**
 * main - Entery point.
 * @argc: argument count.
 * @argv: char array of arguments
 * Return: 0 always success.
 */
int main(int argc, char **argv)
{
	char *result;

	if (argc != 3 || !(check_digits(argv[1]) && check_digits(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}
	else
		result = mul(argv[1], argv[2]);
	printf("%s\n", result);

	return (0);
}
