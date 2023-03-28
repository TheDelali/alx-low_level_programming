#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a character of the string
*/

void rev_string(char *s)
{
	int len = strlen(s);
	for (int i = 0; i < len / 2; i++)
	{
		char temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
