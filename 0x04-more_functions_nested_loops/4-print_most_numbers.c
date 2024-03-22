/* File: 4-print_most_numbers.c */

#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * followed by a new line,
 * Do not print 2 and 4
 */
void print_most_numbers(void)
{
	char m;

	for (m = 48; m < 58; m++)
	{
		if (m == 50)
		{
			continue;
		}

		if (m == 52)
		{
			continue;
		}
		_putchar(m);
	}
	_putchar('\n');
}
