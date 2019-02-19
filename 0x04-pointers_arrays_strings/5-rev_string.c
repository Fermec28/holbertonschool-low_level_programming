#include "holberton.h"
/**
 * rev_string -reversing string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int size;
	int iterator;
	char aux;

	size = _strlen(s);
	for (iterator = 0; iterator < (size / 2); iterator++)
	{
		aux = *(s + iterator);
		*(s + iterator) = *(s + size  - iterator - 1);
		*(s + size - iterator - 1) = aux;
	}
}
/**
 * _strlen - Calculate size of string
 * @s: string to becalculated
 * Return: size of string
 */
int _strlen(char *s)
{
	int cont = 0;

	while (*(s + cont) != '\0')
		cont++;
	return (cont);
}
