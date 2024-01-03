/* File: 100-print_comb3.c */

#include <stdio.h>

/**
 * main -  prints all possible combinations of two digits
 *
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * can only use the putchar function five times maximum
 * not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0, always
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i == 8 && j == 9)
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
