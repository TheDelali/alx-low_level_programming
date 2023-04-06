#include "main.h"

/**
 * is_prime_number -checks if input integer is prime
 * @n: the integer to check
 *
 * Return: 1 if integer is prime and 0 if otherwise
*/

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
