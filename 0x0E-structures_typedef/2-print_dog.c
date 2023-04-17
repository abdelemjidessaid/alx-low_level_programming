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
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Onwer: %s\n", d->owner);
		else
			printf("Onwer: (nil)\n");
	}
}
