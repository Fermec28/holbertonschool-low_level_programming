#include "holberton.h"
/**
 * _puts - print string
 * @str: string to be print
 */
void _puts(char *str)
{
	int cont = 0;

	while (*(str + cont) != '\0')
	{
		_putchar(*(str + cont));
		cont++;
	}
	_putchar(10);
}
