#include "main.h"

/**
 *  * _islower -checks for an uppercase character
 *   * @c: is the character to be checked
 *    * Return: 1 if character is lowercase, otherwise 0
 *    */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
