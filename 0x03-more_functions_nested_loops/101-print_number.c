#include "holberton.h"
/**
 * print_number - print any number
 * @n: number to print
 */
void print_number(int n)
{
	if (n < 10 && n >= 0)
	{
		_putchar(n + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
