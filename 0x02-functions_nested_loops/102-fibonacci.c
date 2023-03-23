#include <stdio.h>

/**
 * main -prints first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
*/

int main(void)
{
	int i, n = 50;
	long long a = 1, b = 2, c;

	printf("%lld, %lld", a, b);
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
