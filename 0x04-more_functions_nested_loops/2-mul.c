/* File: 2-mul.c */

#include "main.h"
#include <stdio.h>

/**
 * mul- function that multiplies two integers
 * @a - First parameter
 * @b - Second parameter
 * Return: Always 0
 */
int mul(int a, int b)
{
	int z = (int)a * (int)b;

	printf("%i", z);
	return (z);
}
