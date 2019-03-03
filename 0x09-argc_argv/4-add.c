#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: count of parametters
 * @argv: Array with the value of parammeters
 * Return: 0 Always Succes
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int iterator;
	int index;

	for (iterator = 1; iterator < argc; iterator++)
	{
		index = 0;
		while (argv[iterator][index])
		{
			if (isdigit(argv[iterator][index]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			index++;
		}
		sum += atoi(argv[iterator]);
	}
	printf("%d\n", sum);
	return (sum);
}
