#include "holberton.h"
/**
 * puts2 - print char out
 * @str: string to print
 */
void puts2(char *str)
{
	int cont = 0;

	while (*(str + cont) != '\0')
	{
		if (cont % 2 == 0)
			_putchar(*(str + cont));
		cont++;
	}
	_putchar(10);
}
