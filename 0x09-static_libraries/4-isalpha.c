/* File: 4-isalpha.c*/

#include "main.h"
#include <ctype.h>

/**
 * _isalpha -function that checks for alphabetic character
 * @c: parameter to be checked if letter or not
 *
 * Prototype: int _isalpha(int c);
 *
 * Return: 1 if c is a letter, 0 otherwise
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
}
