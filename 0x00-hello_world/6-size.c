#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Show size of variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int ll_int;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(long));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll_int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
