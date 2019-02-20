#include <stdio.h>
#include "holberton.h"
/**
 *  _atoi - convert char to integer
 * @s: string to convert
 * Return: number calculated
 */
int _atoi(char *s)
{
	int negatives;
	int contador = 0;
	int result = 0;
	int first_pos = 0;
	int multiplier;

	first_pos = find_pos_num(s);
	last_pos = find_pos_last_num(s, first_pos);
	contador = first_pos;
	while (contador >= first_pos && contador <= last_pos)
	{
		if (is_digit(*(s + contador)))
		{
			multiplier = (contador == 0) ? 1 : 10;
			result *= multiplier;
			result += *(s + contador) - '0';
		}
		contador++;
	}

	negatives = _num_negative(s, first_pos);
	return ((negatives % 2 != 0) ? -result : result);
}
/**
 * _num_negative - calculate how many negatives has an string
 * @s: string to calculate
 * @pos: last posicion to check sign
 * Return: quantity of negatives
 */
int _num_negative(char *s, int pos)
{
	int negatives = 0;
	int contador = 0;

	while (contador < pos)
	{
		if (*(s + contador) == '-')
			negatives++;
		contador++;
	}
	return (negatives);
}
/**
 * find_pos_num - find position first number
 * @s: string
 * Return: position of the first number
 */
int find_pos_num(char *s)
{
	int cont = 0;
	int value =  *(s + cont);

	while ((value > '9' || value < '0') && value >= 0 && value <= 255)
	{
		cont++;
		value =  *(s + cont);
	}
	return (cont);
}
/**
 * find_pos_last_num - find position last number
 * @s: string
 * @initial: initial position
 * Return: position of the last number
 */
int find_pos_last_num(char *s, int initial)
{
	int iterator = initial;
	int value =  *(s + iterator);

	while (value <= '9' || value >= '0')
	{
		iterator++;
		value =  *(s + iterator);
	}
	return (iterator - 1);
}
/**
 * is_digit - determinated if is digit
 * @c: character
 * Return: 1 if is digit
 */
int is_digit(char c)
{
	return ((c >= '0' && c  <= '9') ? 1 : 0);
}
