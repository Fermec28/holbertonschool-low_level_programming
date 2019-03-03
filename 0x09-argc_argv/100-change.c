#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * exchange - calculate minimun count of exhange
 * @coins: array of coins
 * @current: represent actual coin
 * @value: value to be exchange
 * Return: 1 if can exchange
 */
int exchange(int *coins, int current, int value)
{
	if (value >= coins[current])
		return (1 + exchange(coins, current, value - coins[current]));
	else if (value == 0)
		return (0);
	else
		return (exchange(coins, current + 1, value));
}
/**
 * main - Entry point
 * @argc: count of parametters
 * @argv: Array with the value of parammeters
 * Return: 0 Always Succes
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2 || !(atoi(argv[1])))
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (1);
	}
	else
		printf("%d\n", exchange(coins, 0, atoi(argv[1])));
	return (0);
}
