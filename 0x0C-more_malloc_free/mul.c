#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int rest = 0, i, j, n1, n2, len, len1, len2, lng, index, x = 0;

	i = len1 = strlen(s1) - 1;
	j = len2 = strlen(s2) - 1;
	index = lng = len1 > len2 ? len1 : len2;
	final = malloc(lng * sizeof(char) + 1);
	for ( ; index >= 0; index--, i--, j--, x++)
	{
		len = strlen(final);
		if (len >= lng)
		{
			printf("summation realloc\n");
			final = realloc(final, len + 2);
		}
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
	int i, len = strlen(s);

	for (i = len; i < (len + amount); i++)
			s[i] = '0';

	return (s);
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
	char *line = malloc(len + index + 1);
    int last_index = len + index;
	line[last_index] = '\0';


	if (index > 0)
		line = fill(line, index);
	for (i = 0; i < len; i++)
	{
		n2 = s[len - 1 - i] - '0';
		result = n * n2 + rest;
		save = result % 10;
		rest = result / 10;
		if (i + 1 == len && rest > 0)
		{
			printf("calc if 1 realloc\n");
            len = sizeof(line);
			line = realloc(line, len + 1);
			line[index + i] = save + '0';
			line[index + i + 1] = rest + '0';
		}
		else
			line[index + i] = save + '0';
	}

	return (rev(line));
}

int main() {
    char num[] = "28658034365084365083426083109679137608216408631430814308651084650816406134060831608310853086103769013709675067130586570832760732096730978014607369739567864508634086304807450973045703428580934825098342095832409850394285098342509834209583425345267413639235755891879970464524226159074760914989935413350556875770807019893069201247121855122836389417022552166316010013074258781583143870461182707893577849408672040555089482160343085482612348145322689883025225988799452329290281169927532160590651993511788518550547570284574715925006962738262888617840435389140329668772644708";
    char* result = calc(num, 9, 0);
    printf("%s\n", result);
    printf("num len : %lu\n", strlen(num));
    printf("result len : %lu\n", strlen(result));
    free(result);
    return 0;
}
