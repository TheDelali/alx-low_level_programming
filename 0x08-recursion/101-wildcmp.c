#include "main.h"

/**
 * wildcmp -compare if two strings are identical
 * @s1: string to be checked
 * @s2: string to be checked
 *
 * Return: 0 or 1
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	if (*s1 == '\0' || *s2 == '\0' || *s1 != *s2)
	{
		return (0);
	}

	return (wildcmp(s1 + 1, s2 + 1));
}
