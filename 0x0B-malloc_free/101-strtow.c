#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * calc_words - function that clacs words in a string
 * @str: string.
 * Return: number of words.
 */

int calc_words(char *str)
{
	int count = 0, i = 0, len = strlen(str), word = 0;

	for (i = 0; i < len; i++)
	{
		if (
			(str[i] == ' ' && word) ||
			(str[i] != ' ' && i + 1 == len)
		)
		{
			word = 0;
			count++;
		}
		if (str[i] != ' ' && !word)
			word = 1;
	}
	return (count);
}

/**
 * split - function that splits words and return a pointer
 * @str: string.
 * @start: start index of word.
 * @end: end index of word.
 * Return: pointer of new word.
 */

char *split(char *str, int start, int end)
{
	char *word;
	int i = 0, len = (end - start) + 1;

	word = malloc(len * sizeof(char));

	if (word == NULL)
		return (NULL);
	for ( ; i < len; i++, start++)
		word[i] = str[start];
	word[i] = '\0';

	return (word);
}

/**
 * strtow - function that splits string to words.
 * @str: the string.
 * Return: pointer of 2D array of char.
 */

char **strtow(char *str)
{
	int i, len, words = 0, flag = 0, start = 0, end = 0, word_i = 0;
	char **list, *result;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	len = strlen(str);
	words = calc_words(str);
	if (words == 0)
		return (NULL);
	list = malloc((words + 1) * sizeof(char *) + 7);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && !flag)
		{
			flag = 1;
			start = i;
		}
		if (str[i] == ' ' && flag)
		{
			end = i - 1;
			flag = 0;
			result = split(str, start, end);
			if (result == NULL)
				return (NULL);
			list[word_i++] = result;
		}
		if (str[i] != ' ' && flag && i + 1 == len)
		{
			end = i;
			flag = 0;
			result = split(str, start, end);
			if (result == NULL)
				return (NULL);
			list[word_i++] = result;
		}
	}
	list[word_i] = NULL;
	return (list);
}
