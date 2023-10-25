/* File: 2-strlen_recursion.c */

#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to obtain length of
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
