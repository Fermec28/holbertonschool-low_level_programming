#include "holberton.h"
/**
 * puts_half - puts half string
 * @str: string to print
 */
void puts_half(char *str)
{
	long int size;

	size = _strlen(str);
	size = (size % 2 == 0) ? size / 2 : (size - 1) / 2;
	while (*(str + size) != '\0')
	{
		_putchar(*(str + size));
		size++;
	}
	_putchar(10);
}

/**
 * _strlen - Calculate size of string
 * @s: string to becalculated
 * Return: size of string
 */
long int _strlen(char *s)
{
	long int cont = 0;

	while (*(s + cont) != '\0')
		cont++;
	return (cont);
}
