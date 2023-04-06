#include "main.h"

/**
 * check -to see if number is prime
 * @n: number to check
 * @divisor: divisor to use
 *
 * Return: 0 or 1
 */

int check(int n, int divisor)
{
	if (n < 2 || n % divisor == 0)
		return (0);
	else if (n > divisor / 2)
		return (1);
	else
		return (check(n + 1, divisor));
}

/**
 * is_prime_number -checks if input integer is prime
 * @n: the integer to check
 *
 * Return: 1 if integer is prime and 0 if otherwise
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
