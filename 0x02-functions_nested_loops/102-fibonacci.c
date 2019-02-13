#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 Always (Sucess)
 */
int main(void)
{
	long int fibonacci = 1;
	int iterator = 0;
	long int previous = 0;
	long int aux;

	do {
		aux = fibonacci;
		fibonacci += previous;
		printf("%ld", fibonacci);
		previous = aux;
		iterator++;
		if (iterator < 50)
			printf(", ");
	} while (iterator < 50);
	printf("\n");
	return (0);
}
