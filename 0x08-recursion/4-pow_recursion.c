#include "main.h"

/**
 * _pow_recursion -compute the value of x raised to the power y
 * @x: value to be raised by power
 * @y: the power
 *
 * Return: the value of x raised to the power y or -1 if error
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
