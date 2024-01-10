/* File: 1-swap.c */

#include "main.h"

/**
 * swap_int -function that swaps the values of two integers
 * @a: main's pointer &a will be copied to this new pointer in swap_int()
 * @b: main's pointer &a will be copied to this new pointer in swap_int()
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
