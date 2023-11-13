/* File: 1-swap.c */

#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to int
 * @b: pointer to int
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swapper;
	swapper = *a;
	*a = *b;
	*b = swapper;
}
