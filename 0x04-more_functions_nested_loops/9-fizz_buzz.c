#include <stdio.h>

/**
 * main -the fizz-buzz test
 * Return: 0
*/

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		printf("%i ", i);

		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 15 == 0)
			printf("FizzBuzz ");
	}
	printf("\n");
	return (0);
}
