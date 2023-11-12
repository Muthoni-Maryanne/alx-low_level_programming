/* File: 8-print_base16.c */

#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase
 *
 * can only use the putchar function
 * all your code should be in the main function
 * can only use putchar three times in your code
 * Return: 0, always
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
