/* File: 8-print_array.c */

#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array pointer in main copies values to this parameter
 * @n:  number of elements of the array to be printed
 *
 * Prototype: void print_array(int *a, int n);
 * Should be displayed in the same order as they are stored in
 * allowed to use printf
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}
