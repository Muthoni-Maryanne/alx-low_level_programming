/* File: 1-swap.c */

#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to variable a in main/ copy of &a from main
 * @b: pointer to variable b in main/ copy of &b from main
 *
 * Prototype: void swap_int(int *a, int *b);
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
