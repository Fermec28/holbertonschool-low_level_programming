#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Print simple dog
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "nil" : d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "nil" : d->owner);
	}
}
