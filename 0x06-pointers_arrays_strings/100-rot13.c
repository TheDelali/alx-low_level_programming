#include <stdlib.h>
#include <string.h>

/**
 * rot13 -encodes a string with rot13
 * @str: the string to be encoded
 * Return: result
*/

char *rot13(char *str)
{
	char *result = malloc(strlen(str) + 1);
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 'A';
			j = (j + 13) % 26;
			result[i] = j + 'A';
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 'a';
			j = (j + 13) % 26;
			result[i] = j + 'a';
		}
		else
		{
			result[i] = str[i];
		}
	}

	result[i] = '\0';
	return (result);
}
