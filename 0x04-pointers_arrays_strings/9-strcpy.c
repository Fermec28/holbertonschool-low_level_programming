#include "holberton.h"
/**
 * _strcpy - function copy the string pointed
 * @dest: destination pointer
 * @src: source ponter
 * Return: destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int cont = 0;
	do
	{
		*(dest + cont) = *(src + cont);
		cont++;
	} while (*(src + cont) != '\0');
	return dest;
}
