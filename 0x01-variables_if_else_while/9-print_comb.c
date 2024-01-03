/* File: 9-print_comb.c */

#include <stdio.h>

/**
 * main -program that prints all possible combinations of single-digit numbers
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * can only use putchar, 4 times
 * not allowed to use any variable of type char
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
