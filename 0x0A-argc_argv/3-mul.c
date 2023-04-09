#include <stdio.h>
#include <stdlib.h>

/**
 * main -multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 if error and 0 if success
 */

int main(int argc, char *argv[])
{
	int x, y, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	mul = x * y;

	printf("%d\n", mul);

	return (0);
}
