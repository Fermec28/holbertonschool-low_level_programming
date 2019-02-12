#include "holberton.h"

/**
 * times_table - Print value all tables
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int number1;
	int number2;
	int product;

	for (number1 = 0; number1 < 10; number1++)
	{
		for (number2 = 0; number2 < 10; number2++)
		{
			product = number1 * number2;
			if (product < 10 && number2 != 0)
				_putchar(32);
			print_number(product);
			if (number2 < 9)
			{
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar(10);
			}
		}
	}
}

/**
 * print_number - print number with _putchar in char format
 * @number: number to be printed
 */
void print_number(int number)
{
	if (number < 10)
	{
		_putchar(number + '0');
	}
	else
	{
		print_number(number / 10);
		print_number(number % 10);
	}
}
