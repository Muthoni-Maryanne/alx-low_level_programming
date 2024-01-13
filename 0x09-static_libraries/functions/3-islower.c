/*File: 3-islower.c*/

#include "main.h"
#include <ctype.h>

/**
 * _islower -function that checks for lowercase character
 * @c: parameter to be checked if lowercase
 *
 * Prototype: int _islower(int c);
 * Returns 1 if c is lowercase, 0 otherwise
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
