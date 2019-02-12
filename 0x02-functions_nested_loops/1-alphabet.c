#include "holberton.h"
/**
 * print_alphabet - prints lower case a-z
 *
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar(10);
}
