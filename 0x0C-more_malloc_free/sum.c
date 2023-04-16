#include <string.h>
#include <stdio.h>
#include <stdlib.h>


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
 * summation - function that do summation for illimit numbers
 * from two char arrays.
 * @s1: string one.
 * @s2: string two.
 * Return: char pointer which contains the result.
 */
char *summation(char *s1, char *s2)
{
	char *final;
	int rest = 0, i, j, n1, n2, len, len1, len2, shrt, lng, index;
    int x = 0;

	i = len1 = strlen(s1) - 1;
	j = len2 = strlen(s2) - 1;
	shrt = len1 < len2 ? len1 : len2;
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

int main() {
    char *one = "999",
	*two = "11";
    char *result = summation(one, two);

    printf("result : %s\n", result);
    return (0);
}