/* File: 4-print_most_numbers.c */

#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * followed by a new line,
 * Do not print 2 and 4
 */
void print_most_numbers(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		if (m != 2 && m != 4)
			_putchar((m % 10) + '0');
	}

	_putchar('\n');
}
