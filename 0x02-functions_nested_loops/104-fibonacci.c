#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 Always (Sucess)
 */
int main(void)
{
	double fibonacci = 1;
	int iterator = 0;
	double previous = 0;
	double aux;

	do {
		aux = fibonacci;
		fibonacci += previous;
		printf("%.0lf", fibonacci);
		previous = aux;
		iterator++;
		if (iterator < 98)
			printf(", ");
	} while (iterator < 98);
	printf("\n");
	return (0);
}
