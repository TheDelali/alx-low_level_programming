#include "main.h"

/**
 * _strcpy -copies the string pointed to by src
 * @dest: where string is copied to
 * @src: source of copied string
 * Return: destination of copied string
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
