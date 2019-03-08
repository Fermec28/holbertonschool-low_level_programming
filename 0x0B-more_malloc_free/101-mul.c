#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry Point
 * @argc: Num of arguments
 * @argv: array of arguments
 * Return: 0 if its successful
 */
int main(int argc, char *argv[])
{
	int i_argc, i_argv;

	if (argc != 3)
	{
		exit(98);
	}
	for (i_argc = 1; i_argc < i_argc; i++)
	{
		for (i_argv = 0; argv[i_argc][i_argv]; i_argv++)
		{
			if (isdigit(argv[i_argc][i_argv]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	return (0);
}
