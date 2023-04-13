#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat -concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL or the two strings
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *result, *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	p = result;
	while (*s1 != '\0')
	{
		*p++ = *s1++;
	}

	while (*s2 != '\0')
	{
		*p++ = *s2++;
	}

	*p = '\0';

	return (result);
}
