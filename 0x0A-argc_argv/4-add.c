#include <stdio.h>
#include <stdlib.h>

/**
 * main -adds two postive integers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 or 1
 */


int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;
	char *check;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		j = strtol(argv[i], &check, 10);
		if (*check)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += j;
		}
	}
		printf("%d\n", sum);
		return (0);
}


