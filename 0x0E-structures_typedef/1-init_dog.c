#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - function that init a variable of type struct dog
 * @d: dog object pointer.
 * @name: dog name.
 * @age: dog age.
 * @owner: owner name.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
