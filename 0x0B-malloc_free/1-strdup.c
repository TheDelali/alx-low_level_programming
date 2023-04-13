#include <stdlib.h>
#include "main.h"

/**
 * _strdup -returns a pointer to a newly allocated space in memory,
 * which contains copy of the string given as a parameter
 * @str: the string to use
 *
 * Return: NULL or a pointer
 */

char *_strdup(char *str)
{
	char *new;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	new = (char *)malloc((sizeof(char) * len) + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		new[i] = str[i];
	new[len] = '\0';

	return (new);
}
