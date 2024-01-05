/* File: positive_or_negative.c */

#include <stdio.h>

/**
 * main - check if number is positive or negative
 * @n: number to be checked if negative or not
 *
 * Return: 0
 */
int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
