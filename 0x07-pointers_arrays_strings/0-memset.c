/* File: 0-memset.c */

#include "main.h"

/**
 * memset - function that fills memory with a constant byte
 * 
 * @n - _memset() function fills the first n bytes of the memory area 
 * @s - pointer to the mempory to be filled
 * @b - constant
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
