#include "holberton.h"

/**
 * print_triangle - print # matrix nxn
 * @size: size of matrix
 */
void print_triangle(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				(column + row) >= (size - 1) ? _putchar('#') : _putchar(' ');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
