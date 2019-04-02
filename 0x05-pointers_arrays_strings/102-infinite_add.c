#include "holberton.h"
#include <stdio.h>

int lengthstr(char *string);
void reverse(char *string, unsigned int length);
/**
 * infinite_add - add infinite numbers
 * @n1: number 1 positive
 * @n2: number 2 positive
 * @r: pointer to array answer
 * @size_r: size of array answer
 * Return: pointer to answer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char bias = 0;
	int i, l_n1 = lengthstr(n1), l_n2 = lengthstr(n2);

	for (i = 0; i < size_r; i++)
	{
		if ((i < l_n1 || i < l_n2))
		{
			if (i < l_n1)
				bias = bias + n1[l_n1 - i - 1] - '0';
			if (i < l_n2)
				bias = bias + n2[l_n2 - i - 1] - '0';
			r[i] = (bias % 10) + '0';
			bias = bias / 10;
		}
		else
		{
			r[i] = '\0';
			break;
		}

	}
	if (i >= size_r &&  bias > 0)
	{
		return (NULL);
	}
	else
	{
		if  (bias > 0 && i < size_r - 1)
		{
			r[i] = bias + '0';
			r[i + 1] = '\0';
		}
		else
		{
			return (NULL);
		}
		reverse(r, lengthstr(r));
		return (r);
	}
}
/**
 * reverse - function to reverse string
 * @string: string to reverse
 * @length: length of string
 */
void reverse(char *string, unsigned int length)
{
	unsigned int auxlength, i;
	char aux;

	auxlength = length % 2 == 0 ? length / 2 : (length / 2) + 1;

	for (i = 0; i < auxlength; i++)
	{
		aux = string[i];
		string[i] = string[(length - i - 1)];
		string[(length - i - 1)] = aux;
	}
}
/**
 * lengthstr - Calculates the length of string
 * @string: string to calculate the length
 * Return: length of string
 */
int lengthstr(char *string)
{
	int i = 0;

	while (string[i])
		i++;
	return (i);
}
