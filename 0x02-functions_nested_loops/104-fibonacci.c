#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 Always (Sucess)
 */
int main(void)
{
        long max = 100000000000;
	long fibonacci1 = 1;
	long fibonacci2 = 0;
	int iterator = 0;
        long previous1 = 0;
	long previous2 = 0;
	long aux;
	long aux2;

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
			printf("%ld%ld", fibonacci2, fibonacci1);
		}
		else
		{
			printf("%ld", fibonacci1);
		}
		iterator++;
		if (iterator < 99)
			printf(", ");
	} while (iterator <= 98);
	printf("\n");
	return (0);
}
