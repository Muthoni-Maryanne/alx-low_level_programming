/* File: 102-print_comb5.c */

#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * The numbers should range from 0 to 99
 * You can only use the putchar function and 8 times
 * not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return:0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = i; j <= 57; j++)
		{
			for (k = j; k <= 57; k++)
			{
				for (l = k; l <= 57; l++)
				{
					if ((i == j) && (i == k) && (i  == l))
					{
						continue;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 56 && j == 57 && k == 57 && l == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
