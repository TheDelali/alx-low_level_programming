#include "main.h"

/**
 * _strcat -conactenates two strings
 * @dest: destination of result
 * @src: source of string
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
