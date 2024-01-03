/*File: 101-print_comb4.c*/

#include <stdio.h>

/**
 * main -prints all possible different combinations of two digits
 * Numbers must be separated by , followed by a space
 * The two digits must be different
 * Print only the smallest combination of two digits
 * ascending order
 * can only use putchar, 5 times max
 * not allowed to use any variable of type char
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
