#include "holberton.h"
/**
 * print_rev - print reverse of string
 * @s: string
 */
void print_rev(char *s)
{
	int size;

	size = _strlen(s) - 1;
	while (size >= 0)
	{
		_putchar(*(s + size));
		size--;
	}
	_putchar(10);
}
/**
 * _strlen - get size of string
 * @s: string
 * Return: size of string
 */
int _strlen(char *s)
{
	int cont = 0;

	while (*(s + cont) != '\0')
		cont++;
	return (cont);
}
