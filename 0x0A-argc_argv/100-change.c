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
	int cents = atoi(argv[1]);
	int coins [] = {25, 10, 5, 2, 1};
	int num = 0;
	int i;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			num++;
		}
	}
	printf("%d\n", num);
	return (0);
}
