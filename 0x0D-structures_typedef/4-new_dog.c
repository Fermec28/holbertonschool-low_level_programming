#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - copy string
 * @str: string to copy
 * Return: ponter pointed to memory allocation
 */
char *_strcpy(char *str)
{
	char *p;
	int size;

	for (size = 0; *(str + size); size++)
		;
	p = malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	for (; size >= 0; size--)
		p[size] = str[size];
	return (p);
}
/**
 * new_dog - Create Dog
 * @name: name of Dog
 * @age: age of Dog
 * @owner: Owner of Dog
 * Return: pointer to New Dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = _strcpy(name);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = _strcpy(owner);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return (p);
}
