/* File: 101-print_comb4.c*/

#include <stdio.h>

/**
 * main -prints all possible different combinations of three digits
 * Numbers must be separated by , followed by a space
 * The three digits must be different
 * Numbers should be printed in ascending order, with three digits
 * Only use putchar, 6 times max
 * not allowed to use any variable of type char
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
