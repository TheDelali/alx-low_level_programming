#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr -concatenates arguments of program
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: pointer to new string or NULL if failed
 */

char *argstostr(int ac, char **av)
{
	int totallen = 0;
	int i;
	char *result;
	char *pos;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		totallen += strlen(av[i]) + 1;

	result = (char *) malloc(sizeof(char) * totallen + 1);

	if (result == NULL)
		return (NULL);

	pos = result;
	for (i = 0; i < ac; i++)
	{
		int len = strlen(av[i]);

		memcpy(pos, av[i], len);
		pos += len;
		*pos++ = '\n';
	}

	*pos = '\0';
	return (result);
}
