#include <stdio.h>
/**
 * main - Entry point
 * @argc: count of parametters
 * @argv: Array with the value of parammeters
 * Return: 0 Always Succes
 */
int main(int argc, char *argv[])
{
	int iterator;

	for (iterator = 0; iterator < argc; iterator++)
		printf("%s\n", argv[iterator]);
	return (0);
}
