#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Free dog object
 * @d: pointer to dog object
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
