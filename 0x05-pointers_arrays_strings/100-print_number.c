#include "holberton.h"
/**
 * print_number - print number
 * @n: number to be printed
 */
void print_number(int n)
{
	int aux;

	if (n < 0)
	{
		_putchar('-');
		aux = n / 10;
		print_number(-aux);
		aux = n % 10;
		print_number(-aux);
	}
	else if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else
	{
		_putchar(n + '0');
	}
}
