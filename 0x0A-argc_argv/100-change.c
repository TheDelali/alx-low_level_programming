#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints minimum number of coins to make change for
 * an amount of money
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int coin_c = 0, cents, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}

	for (i = 0; i < 5; i++)
	{
		coin_c += cents / coins[i];
		cents %= coins[i];
	}
	return (0);
}
