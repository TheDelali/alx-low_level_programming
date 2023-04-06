#include <string.h>
#include "main.h"

/**
 * check -check for palindrome
 * @s: input string
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if palindrome 0 if mot
*/

int check(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}

	return (check(s, start + 1, end - 1));
}

/**
 * is_palindrome -states whether palindrome
 * @s: string to check
 *
 * Return: whether palindrome or not
*/

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}

	return (check(s, 0, len - 1));
}
