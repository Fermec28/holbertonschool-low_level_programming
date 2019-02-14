#include "holberton.h"

/**
 * print_diagonal - print line n times
 * @n: times to print
 */
void print_diagonal(int n)
{
	int row;
	int column;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (column = 0; column <= row; column++)
			{
				if (row == column)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
