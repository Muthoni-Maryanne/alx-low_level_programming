/* File: 0-positive_or_negative.c */

#include <stdlib.h>
#include <time.h>

/**
 * main - assign a random number to the variable n each time executed
 * output should be the number followed by:if n is +, - or 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
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
