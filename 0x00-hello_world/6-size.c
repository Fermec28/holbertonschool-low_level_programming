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
	char varchar;
	int varint;
	long int varlong;
	long long int l;
	float varfloat;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(varchar));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(varint));
	printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(varlong));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(varfloat));
	return (0);
}
