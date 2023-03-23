#include <stdio.h>

/**
 * main -prints first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
*/

int main(void)
{
	unsigned long a = 0, b = 1, c;
	int i;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
