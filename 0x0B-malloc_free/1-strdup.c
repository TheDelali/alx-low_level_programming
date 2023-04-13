#include <stdlib.h>
#include <string.h>
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
	size_t len = strlen(str);
	char *new_str = (char *) malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
