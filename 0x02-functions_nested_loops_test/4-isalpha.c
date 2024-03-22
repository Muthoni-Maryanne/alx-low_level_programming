/* File: 4-isalpha.c */

#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}
