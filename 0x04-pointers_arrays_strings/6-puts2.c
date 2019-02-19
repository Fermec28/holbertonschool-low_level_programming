#include "holberton.h"
/**
 * puts2 - print char out
 * @str: string to print
 */
void puts2(char *str)
{
	int cont = 0;

	while (*(str + cont) && (*(str + cont) != '\0' || *(str + cont - 1) != '\0')
	{
		_putchar(*(str + cont));
		cont += 2;
	}
	_putchar(10);
}
