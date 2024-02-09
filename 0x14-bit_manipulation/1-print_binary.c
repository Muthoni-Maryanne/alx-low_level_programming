/* File: 1-print_binary.c */

#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: value to be converted to bits
 *
 * Prototype: void print_binary(unsigned long int n);
 * not allowed to use arrays, malloc, % or / operators
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zeroes;

	if (n == 0)
	{
		_putchar('0');
	}

	mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	leading_zeroes = 1;

	while (mask > 0)
	{
		if ((n & mask) == 0 && leading_zeroes)
		{
			mask >>= 1;
			continue;
		}
		leading_zeroes = 0;
		_putchar((n & mask) != 0 ? '1' : '0');
		mask >>= 1;
	}
}
