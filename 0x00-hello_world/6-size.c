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

	printf("Size of a %s: %lu byte(s)\n", "char", (unsigned long)sizeof(char));
	printf("Size of a %s: %lu byte(s)\n", "int", (unsigned long)sizeof(int));
	printf("Size of a %s: %lu byte(s)\n", "long", (unsigned long)sizeof(long));
	printf("Size of a %s: %ld byte(s)\n", "long int", sizeof(long int));
	printf("Size of a %s: %lu byte(s)\n", "long long int", sizeof(ll_int));
	printf("Size of a %s: %lu byte(s)\n", "float", sizeof(float));
	return (0);
}
