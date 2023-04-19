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
	int pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		totallen += strlen(av[i]) + 1;

	result = (char *) malloc(sizeof(char) * totallen);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcpy(result + pos, av[i]);
		pos += strlen(av[i]);
		result[pos++] = '\n';
	}

	return (result);
}
