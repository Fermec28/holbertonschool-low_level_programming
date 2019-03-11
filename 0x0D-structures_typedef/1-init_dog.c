#include "dog.h"

/**
 * init_dog - initialize structure dog
 * @d: Dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner  to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
