/* File: 5-more_numbers.c */

#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int n, count;

	for (count = 0; count < 10; count++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
