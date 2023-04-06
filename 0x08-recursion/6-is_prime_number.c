#include "main.h"
#include <math.h>

/**
 * check -to see if number is prime
 * @n: number to check
 * @divisor: divisor to use
 *
 * Return: 0 or 1
 */

int check(int n, int divisor)
{
	if (n < 2)
		return (0);
	if (divisor > sqrt(n))
		return (1);
	if (n % divisor == 0)
		return (0);

	return (check(n, divisor + 1));
}

/**
 * is_prime_number -checks if input integer is prime
 * @n: the integer to check
 *
 * Return: 1 if integer is prime and 0 if otherwise
*/

int is_prime_number(int n)
{
	return (check(n, 2));
}
