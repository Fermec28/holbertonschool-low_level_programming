#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * exchange - calculate minimun count of exhange
 * @coins: array of coins
 * @cur: represent actual coin
 * @value: value to be exchange
 * Return: 1 if can exchange
 */
int exchange(int *coins, int cur, int value)
{
	if (value >= coins[cur])
		return (value / coins[cur] + exchange(coins, cur, value % coins[cur]));
	else if (value == 0)
		return (0);
	else
		return (exchange(coins, cur + 1, value));
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
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	else
		printf("%d\n", exchange(coins, 0, n));
	return (0);
}
