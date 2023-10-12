/*File: 103-fibonacci.c*/

#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fibno1 = 0, fibno2 = 1, fibnosum;
	float total;

	while (1)
	{
		fibnosum = fibno1 + fibno2;
		if (fibnosum > 4000000)
			break;

		if ((fibnosum % 2) == 0)
			tot_sum += fibsnoum;

		fibno1 = fibno2;
		fibno2 = fibnosum;
	}
	printf("%.0f\n", total);

	return (0);
}
