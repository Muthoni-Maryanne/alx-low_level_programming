/* File: 7-print_last_digit.c */

#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number
 * @c: value whose last digit is to be obtained.
 *
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int n;

	n = c % 10;

	if (c % 10 > 0)
	{
		_putchar('0' + n);
		return (n);
	}
	else if (c % 10 < 0)
	{
		_putchar('0' + -n);
		return (-n);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
