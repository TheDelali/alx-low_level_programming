#include "main.h"

/**
 * _strpbrk -searches a string for any set of bytes
 * @s: string to be checked
 * @accept: string to be checked
 *
 * Return: NULL or s
*/

char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		for (char *p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
