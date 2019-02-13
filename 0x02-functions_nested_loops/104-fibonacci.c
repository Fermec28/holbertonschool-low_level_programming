#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 Always (Sucess)
 */
int main(void)
{
	long int max = 1000000000000000000;
	long int fibonacci1 = 1;
	long int fibonacci2 = 0;
	int iterator = 0;
	long int previous1 = 0;
	long int previous2 = 0;
	long int aux;
	long int aux2;

	do {
		aux = fibonacci1;
		aux2 = fibonacci2;
		fibonacci1 += previous1;
		if (fibonacci1 > max - 1)
		{
			fibonacci1 -= previous1;
			fibonacci1 = fibonacci1 - max + previous1;
			fibonacci2++;
		}
		previous1 = aux;
		fibonacci2 += previous2;
		previous2 = aux2;
		if (fibonacci2 > 0)
		{
			printf("%lu%lu", fibonacci2, fibonacci1);
		}
		else
		{
			printf("%lu", fibonacci1);
		}
		iterator++;
		if (iterator < 99)
			printf(", ");
	} while (iterator <= 98);
	printf("\n");
	return (0);
}
