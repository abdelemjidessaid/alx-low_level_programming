#ifndef _DOG_H_
#define _DOG_H_

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
#endif /* _DOG_H_ */

#ifndef _INIT_DOG_
#define _INIT_DOG_
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _INIT_DOG_ */

