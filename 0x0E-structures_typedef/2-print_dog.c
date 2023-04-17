#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints the info of object of type struct dog
 * @d: pointer of struct variable of type dog.
 * Retur: void.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOnwer: %s\n", d->name, d->age, d->owner);
	}
	else
		return;
}
