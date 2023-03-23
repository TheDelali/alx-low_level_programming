#include <stdio.h>

/**
 * main -prints first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
*/

int main(void)
{
	int a = 1, b = 2, c;
	int i;

	printf("%d, %d, ", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
