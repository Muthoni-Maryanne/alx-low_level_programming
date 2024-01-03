/* File: 9-print_comb.c */

#include <stdio.h>

/**
 * main -  prints all possible combinations of single-digit numbers
 *
 * Numbers must be separated by , followed by a space
 * Numbers should be printed in ascending order
 * can only use the putchar function
 * All your code should be in the main function
 * not allowed to use any variable of type char
 * Return: 0, always
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
