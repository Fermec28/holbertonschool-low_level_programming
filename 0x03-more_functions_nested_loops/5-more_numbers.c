#include "holberton.h"

/**
 * more_numbers - print num 0 - 14 x 10
 */
void more_numbers(void)
{
	int number;
	int iterator;

	for (iterator = 0; iterator < 10; iterator++)
	{
		for (number = 0; number < 15; number++)
			print_any_number(number);
		_putchar(10);
	}
}

/**
 * print_any_number - pritn any number
 * @number: number to be printed
 */
void print_any_number(int number)
{
	if (number < 10)
	{
		_putchar(number + '0');
	}
	else
	{
		print_any_number(number / 10);
		print_any_number(number % 10);
	}
}
