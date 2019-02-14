#include "holberton.h"

/**
 * print_most_numbers - print num 0 - 9
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
		if (number != 2 && number != 4)
			_putchar(number + '0');
	_putchar(10);
}
