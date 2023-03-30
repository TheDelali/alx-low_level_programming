#include "main.h"

/**
 * _strncat -concatenates two strings
 * @dest: destination of the result
 * @src: source string
 * @n: bytes from src used
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	int i = 0;

	while (i < n && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}

	*ptr = '\0';
	return (dest);
}
