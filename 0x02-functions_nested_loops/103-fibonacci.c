#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 Always (Sucess)
 */
int main(void)
{
	long int fibonacci = 1;
	long int previous = 0;
	long int aux;
	long int even = 0;

	do {
		aux = fibonacci;
		fibonacci += previous;
		previous = aux;
		if (previous % 2 == 0)
			even += previous;
	} while (fibonacci < 4000000);
	printf("%li\n", even);
	return (0);
}
