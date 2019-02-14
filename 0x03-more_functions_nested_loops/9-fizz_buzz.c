#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int iterator;

	for (iterator = 1; iterator <= 100; iterator++)
	{
		if (iterator % 3 == 0 && iterator % 5 == 0)
			printf("FizzBuzz");
		else if (iterator % 3 == 0)
			printf("Fizz");
		else if (iterator % 5 == 0)
			printf("Buzz");
		else
			printf("%d", iterator);
		if (iterator != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
