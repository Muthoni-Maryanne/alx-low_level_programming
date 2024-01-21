/* File: 102-print_comb5.c */

#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * The numbers should range from 0 to 99
 * You can only use the putchar function and 8 times
 * not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i == 98 && j == 99)
				break;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
