#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 *
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;
	int digit4;
	int initializer;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
		for (digit2 = 48; digit2 < 58; digit2++)
		{
			for (digit3 = digit1; digit3 < 58; digit3++)
			{
				if (digit1 == 48 && digit2 == 48 )
				{
					if (digit3 == 48)
					{
						initializer = 49;
					}
					else
					{
						initializer =  48;
					}
				}
				else
				{
					initializer = digit2 + 1;
				}
				for (digit4 = initializer; digit4 < 58; digit4++)
				{
					putchar(digit1);
					putchar(digit2);
					putchar(32);
					putchar(digit3);
					putchar(digit4);
					if (digit1 != 57 || digit2 != 56 || digit3 != 57 || digit4 != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
