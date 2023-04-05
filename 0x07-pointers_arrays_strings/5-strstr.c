#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strstr -locates a substring
 * @haystack: string to be checked
 * @needle: string to be checked
 *
 * Return: NULL or pointer to beginning of located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int needle_len = strlen(needle);
	int haystack_len = strlen(haystack);

	if (needle_len > haystack_len)
	{
		return (NULL);
	}

	int i;

	for (i = 0; i <= haystack_len - needle_len; i++)
	{
		int j;

		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == needle_len)
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
