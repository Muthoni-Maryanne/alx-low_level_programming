/* File: 4-clear_bit.c */

#include "main.h"
#include <stddef.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: address of value
 * @index: index to be set to 0
 *
 * Prototype: int clear_bit(unsigned long int *n, unsigned int index);
 * where index is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
