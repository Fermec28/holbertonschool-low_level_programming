#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 *
 */
int main(void)
{
	int c;

	for (c = 48;c < 64; c++)
	{
		if (c < 58)
			putchar(c);
		else
			putchar(c + 39);
	}
	putchar(10);
	return(0);
}
