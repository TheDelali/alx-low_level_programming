#include "main.h"

/**
 * check -check for square root
 * @n: number to check
 * @start: int
 * @end: int
 *
 * Return: int or -1
 */
int check(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (check(n, mid + 1, end));
	}
	else
	{
		return (check(n, start, mid - 1));
	}
}

/**
 * _sqrt_recursion -compute natural square root of a number
 * @n: integer to find square root of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (check(n, 0, n));
	}
}
