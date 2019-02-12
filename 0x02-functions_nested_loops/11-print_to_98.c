#include "holberton.h"

/**
 * print_to_98 - print list nuber to 98.
 * @n: startpoint to list
 */
void print_to_98(int n)
{
	while (n < 98 || n > 98)
	{
		print_number(n);
		_putchar(',');
		_putchar(32);
		n < 98 ? n++ : n--;
	}
	print_number(n);
	_putchar(10);
}
/**
 * print_number - print number with _putchar in char format
 * @number: number to be printed
 */
void print_number(int number)
{
	if (number < 10 && number >= 0)
	{
		_putchar(number + '0');
	}
	else if (number < 0)
	{
		_putchar('-');
		print_number(-number);
	}
	else
	{
		print_number(number / 10);
		print_number(number % 10);
	}
}
