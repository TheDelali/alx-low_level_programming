#include "main.h"

/**
 * _strncpy -copies a string
 * @dest: destination of string
 * @src: source of string
 * @n: length of int
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}

	return (dest);
}
