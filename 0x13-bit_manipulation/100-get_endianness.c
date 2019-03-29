#include "holberton.h"
/**
 * get_endianness - find endianness
 * Return: 0 big - 1 little
 */
int get_endianness(void)
{
	unsigned int number = 1;
	char *p = (char *)&number;

	return (*p);
}
