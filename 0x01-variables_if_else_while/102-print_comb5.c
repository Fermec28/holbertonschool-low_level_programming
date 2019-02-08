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

	digit1 = 48;
	digit2 = 48;
	digit3 = 48;
	digit4 = 49;
	while (digit1 < 58)
	{
		while (digit2 < 58)
		{
			while (digit3 < 58)
			{
				while (digit4 < 58)
				{
					putchar(digit1);
					putchar(digit2);
					putchar(32);
					putchar(digit3);
					putchar(digit4);
					if (digit1 != 57 || digit2 != 56 || digit3 != 57 || digit4 != 57)
					{
						putchar(',');
						putchar(' ');
					}
					digit4 += 1;
				}
				digit3++;
				digit4 = 48;
			}
			digit2++;
			digit4 = digit2 + 1;
			digit3 = digit1;
		}
		digit1++;
		digit2 = 48;
	}
	putchar(10);
	return (0);
}
