#include "main.h"

/**
 * check -checks if number is prime
 * @x: an int
 * @y: an int
 *
 * Return: an int
 */

int check(int x, int y)
{
	if (x < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check(x + 1, y));
}

/**
 * is_prime_number -states if number is prime
 * @n: number to check
 *
 * Return: whether prime or not
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
