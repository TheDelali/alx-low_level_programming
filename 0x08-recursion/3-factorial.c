#include "main.h"

/**
 * factorial -compute the factorial of a given number
 * @n: number to compute
 *
 * Return: factorial of number or -1 if error
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
