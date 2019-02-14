#include "holberton.h"

/**
 * print_line - print line _ n times
 * @n: times to print
 */
void print_line(int n)
{
	int iterator;

	if (n > 0)
	{
		for (iterator = 0; iterator <= n; iterator++)
		{
			_putchar('_');
		}
	}
	_putchar(10);
}
