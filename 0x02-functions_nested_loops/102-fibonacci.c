/* File: 102-fibonacci.c */

#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fibno1 = 0, fibno2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibno1 + fibno2;
		printf("%lu", sum);

		fibno1 = fibno2;
		fibno2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
