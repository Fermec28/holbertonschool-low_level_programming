#include "holberton.h"
/**
 * puts_half - puts half string
 * @str: string to print
 */
void puts_half(char *str)
{
	int size;
	int iterator;

	size = _strlen(str);
	iterator = (size % 2 == 0) ? size / 2 : (size/ 2) + 1;
	while (*(str + iterator) != '\0')
	{
		_putchar(*(str + iterator));
		iterator++;
	}
	_putchar(10);
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
