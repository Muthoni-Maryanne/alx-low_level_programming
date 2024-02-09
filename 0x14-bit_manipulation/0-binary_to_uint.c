/* File: 0-binary_to_uint.c */

#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b: pointer holding string value
 *
 * Prototype: unsigned int binary_to_uint(const char *b);
 * where b is pointing to a string of 0 and 1 chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
