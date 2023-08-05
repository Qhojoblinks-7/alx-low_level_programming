#include <stdio.h>
#include <stdlib.h>

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
		_putchar('0');

		_putchar('\n');
	}
	else
	{
		int num_coins = mini_coins(cents);
		printf("%d\n", num_coins);
	}

	return (0);
}

/**
 * mini_coins - a function that returns the least number of coins
 * @coins: the number of coins to be used
 * Return: count
 */

int mini_coins(int coins)
{
	int coin[] = {25, 10, 5, 2, 1};
	int count = 0;

	int i;

	for (int i = 0; i < 5; i++)
	{
		while (cents >= coin[i])
		{
			coins -= coin_values[i];
			count++;
		}
	}
	return count;
}

