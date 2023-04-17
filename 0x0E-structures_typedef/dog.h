#include <string.h>
#include <stdlib.h>

#ifndef DOG /* start */
#define DOG

/**
 * struct dog - struct to create dog objects.
 * @name: charsequence that contains the dog name.
 * @age: float number that contains the dog age.
 * @owner: charsequence that contains the dog owner's name.
 *
 * Description: dog struct is a new data type that is uses to define new
 * dog object that contains dog's name, age and owner name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* end */
