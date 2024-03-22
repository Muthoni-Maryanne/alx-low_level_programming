/* File: 3-islower.c */

#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 * @c: character to be checked if lowercase
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) ==  0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}
