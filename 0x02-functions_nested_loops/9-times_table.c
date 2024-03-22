/* 9-times_table.c */

#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 * Prototype: void times_table(void);
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, result, n, d;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			n = result % 10;
			d = result / 10;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (result < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(d + '0');
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
