#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void fill_array(char *str, int initial, int final, char value);
int str_length(char *str);
void reverse_str(char *str, int size);
void myprint(char *str);
void check_digits(int argc, char *argv[]);
int product_characters(char num1, char num2);
/**
 * main -Entry Point
 * @argc: Num of arguments
 * @argv: array of arguments
 * Return: 0 if its successful
 */
int main(int argc, char *argv[])
{
	int i_argc, i_argv, bias;
	int l_str1, l_str2, size;
	int i_str1 = 0,i_str2 = 0;
	char *p;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	check_digits(argc, argv);
	l_str1  = str_length(argv[1]);
	l_str2  = str_length(argv[2]);
	reverse_str(argv[1],str_length(argv[1]));
	reverse_str(argv[2],str_length(argv[2]));
	size = (l_str1 >= l_str2 ? l_str1 : l_str2);
	p = malloc(sizeof(char) * (size + 1));
	if (p == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	fill_array(p,0,size - 1, '0');
	p[size] = '\0';
	while(argv[1][i_str1])
	{
		while(argv[2][i_str2])
		{
			bias = product_characters(argv[2][i_str2],argv[1][i_str1]);
			printf("%d\n",bias);
			i_str2++;
		}
		i_str2 = 0;
		i_str1++;
	}
	free(p);
	return (0);
}
int product_characters(char num1, char num2)
{
	return ((num1 - '0') * (num2 - '0'));
}
void check_digits(int argc, char *argv[])
{
	int i_argc, i_argv;

	for (i_argc = 1; i_argc < argc; i_argc++)
	{
		for (i_argv = 0; argv[i_argc][i_argv]; i_argv++)
		{
			if (!isdigit(argv[i_argc][i_argv]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
}
void myprint(char *str)
{
	int i = 0;
	while(str[i])
	{
		printf("%c", str[i]);
		i++;
	}
printf("\n");
}
void reverse_str(char *str, int size)
{
	int length;
	int iterator;
	char aux;

	length = size % 2 == 0 ? size / 2 : ((size / 2) + 1);
	for  (iterator = 0; iterator < length; iterator++)
	{
		aux = str[iterator];
		str[iterator] = str[size - iterator -1];
		str[size - iterator - 1] = aux;
	}

}
void fill_array(char *str, int initial, int final, char value)
{
	int iterator;
	for(iterator = initial; iterator <= final; iterator++)
		str[iterator] = value;
}
int str_length(char *str)
{
	int iterator =0;

	while (str[iterator])
		iterator++;
	return (iterator);
}
