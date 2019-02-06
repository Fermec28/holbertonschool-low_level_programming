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
	printf("Size of a %s: %d byte(s)\n", "char", size(char));
	printf("Size of a %s: %d byte(s)\n", "int", size(int));
	printf("Size of a %s: %d byte(s)\n", "long", size(long));
	printf("Size of a %s: %d byte(s)\n", "long int", size(long int));
	printf("Size of a %s: %d byte(s)\n", "long long int", size(long long int));
	return (0);
}
