/* File: 5-flip_bits.c */

#include "main.h"

/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from one number to another
 * @n: number to flip
 * @m: number to be flipped to
 *
 * Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
 * You are not allowed to use the % or / operators
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
