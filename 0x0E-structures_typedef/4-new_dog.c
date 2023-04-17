#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}

	return (i);
}

/**
 * _strcpy - function that copies charsequences.
 * @dest: pointer of destination of copy.
 * @src: pointer of source of copy.
 * Return: pointer of dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == NULL || src == NULL)
		return (NULL);
	while (*src)
	{
		dest[i] = *src++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that created new dog objects of dog struct.
 * @name: charsequence contains the dog name.
 * @age: float contains the dog age.
 * @owner: charsequence contains the dog owner's name.
 *
 * Return: a pointer of type dog struct, or NULL if fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL || name == NULL || owner == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = malloc(_strlen(name) * sizeof(char) + 1);
	p->owner = malloc(_strlen(owner) * sizeof(char) + 1);
	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	p->name = _strcpy(p->name, name);
	p->age = age;
	p->owner = _strcpy(p->owner, owner);

	return (p);
}
