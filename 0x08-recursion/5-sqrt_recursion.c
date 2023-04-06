#include "main.h"

/**
 * check -check for square root
 * @x: an int
 * @y: an int
 *
 * Return: int or -1
 */
int check(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (check(x + 1, y));

/**
 * _sqrt_recursion -compute natural square root of a number
 * @n: integer to find square root of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
