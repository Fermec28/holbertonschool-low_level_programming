#include <string.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: array with arguments
 * Return: 0 if succes, 98 worng parameters and 99 if no operator
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
