#include "holberton.h"

/**
 * print-line - print line n times
 * @n: times to print _
 */
void print_line(int n)
{
	int iterator;

	if (n > 0)
	{
		for (iterator = 0; iterator < n; iterator++)
		{
			_putchar('_');
		}
	}
	_putchar(10);
}
