#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

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
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
