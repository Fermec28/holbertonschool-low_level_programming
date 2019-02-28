#include "holberton.h"
/**
 * is_palindrome - return if it's palindrome
 * @s: string
 * Return: 1 if its palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int length;
	int aux;

	length = _strlen_recursion(s);
	aux = calculate_palindrome(s, length, 0);
	if (aux == 0 || length == 0)
		return (1);
	else
		return (0);
}
/**
 * calculate_palindrome - calculate palindrome
 * @s: string
 * @size: size of string
 * @current: current interator
 * Return: 1 if its palindrome
 */
int calculate_palindrome(char *s, int size, int current)
{
	int middle;

	if (size % 2 == 0)
		middle = (size / 2);
	else
		middle = ((size + 1) / 2);
	if (current < middle)
	{
		if (s[current] == s[size - current - 1])
		{
			return (0 + calculate_palindrome(s, size, current + 1));
		}
		else
		{
			return (1 + calculate_palindrome(s, size, current + 1));
		}

	}
	return (0);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to print
 * Return: Length of array
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
