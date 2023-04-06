#include "main.h"

/**
 * _strlen_recursion -returns the length of a string
 * @s: a character of the string
 *
 * Return: length pof string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
