#include "holberton.h"

/**
 * times_table - Print value all tables
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int number1;
	int number2;
	int product;

	if (n < 15 && n > 0)
	{
		for (number1 = 0; number1 <= n; number1++)
		{
			for (number2 = 0; number2 <= n; number2++)
			{
				product = number1 * number2;
				if (product < 10 && number2 != 0)
				{
					_putchar(32);
					_putchar(32);
				}
				if (product < 100 && product > 9)
					_putchar(32);
				print_number(product);
				if (number2 < n)
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
