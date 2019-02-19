#include <stdio.h>
/**
 * print_array - print array
 * @a: array to print
 * @n: size of array
 */
void print_array(int *a, int n)
{
	int iterator;

	for (iterator = 0; iterator < n; iterator++)
	{
		printf("%d", *(a + iterator));
		if (iterator != n - 1)
			printf(", ");
	}
	printf("\n");
}
