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
		printf("Name: ");
		(d->name == NULL) ? printf("%p\n",d->name) : printf("%s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: ");
		(d->owner == NULL) ? printf("%p\n", d->owner) : printf("%s\n", d->owner);
	}
}
