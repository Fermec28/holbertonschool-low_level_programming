#include "holberton.h"

/**
 * print_binary - print number in binary
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		printf("0");
	else
	{
		unsigned long int aux;

		aux = n >> 1;
		if (aux)
			print_binary(aux);
		printf("%lu", n & 1);
	}
}
