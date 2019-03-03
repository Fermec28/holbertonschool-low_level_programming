#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: count of parametters
 * @argv: Array with the value of parammeters
 * Return: 0 Always Succes
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
