#include <stdio.h>
#include <stdlib.h>

/**
 * mini_coins - a function that returns the least number of coins
 * @cents: the number of coins to be used
 * Return: count
 */

int mini_coins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = 0;

	int i;

	for (i = 0; i < 5; i++)
	{
		numCoins += cents / coins[i];
		cents %= coins[i];
	}

	return (numCoins);
}

/**
 * main - the main function
 * @argv: keeps types of aguments
 * @argc: counts the number of arguments
 * Return: 0
 */


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		putchar('0');

		putchar('\n');
	}
	else
	{
		int num_coins = mini_coins(cents);

		printf("%d\n", num_coins);
	}

	return (0);
}
