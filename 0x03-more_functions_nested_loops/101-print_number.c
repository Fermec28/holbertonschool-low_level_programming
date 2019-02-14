#include "holberton.h"
/**
 * print_number - print any number
 * @n: number to print
 */
void print_number(int n)
{
	int aux1;
	int aux2;

	if (n < 10 && n >= 0)
	{
		_putchar(n + '0');
	}
	else if (n < 0)
	{
		aux1 = n / 10;
		aux2 = n % 10;
		_putchar('-');
		if (aux1 != 0)
			print_number(-aux1);
		print_number(-aux2);
	}
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
