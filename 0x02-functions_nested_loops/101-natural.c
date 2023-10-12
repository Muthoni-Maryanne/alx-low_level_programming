/* File: 101-natural.c */

#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int z, sum = 0;

	for (z = 0; z < 1024; z++)
	{
		if ((z % 3) == 0 || (z % 5) == 0)
			sum += z;
	}

	printf("%d\n", sum);

	return (0);
}
