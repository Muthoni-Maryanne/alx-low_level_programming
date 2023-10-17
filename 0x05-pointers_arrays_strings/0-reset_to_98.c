/* File: 0-reset_to_98.c */

#include <stdio.h>
#include "main.h"

/**
 * main - function that takes a pointer to an int as parameter,
 * updates the value it points to to 98
 *
 * Return: 0, always.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int n = 402;
	int *p;
	p = &n;
	printf("Value of n: %d.\n", n);

	reset_to_98(p);
	printf("Value of n after derefrencing: %d.\n", n);

	return (0);
}
