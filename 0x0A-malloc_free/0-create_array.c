#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Programm create array
 * @size: size of array
 * @c: initial char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size > 0)
	{
		p =  malloc(sizeof(char) * size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			p[i] = c;
	}
	else
	{
		return (NULL);
	}
	return (p);
}
