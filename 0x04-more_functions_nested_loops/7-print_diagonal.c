/* File: 7-print_diagonal.c */

#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, empty_slot;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (empty_slot = 0; empty_slot < i; empty_slot++)
				_putchar(' ');
			_putchar('\\');

			if (i == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
