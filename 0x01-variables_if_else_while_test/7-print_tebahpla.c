/* File: 7-print_tebahpla.c */

#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse, followed by a new line
 *
 * can only use the putchar function
 * code should be in the main function
 * can only use putchar twice in your code
 * Return: 0, always
 */
int main(void)
{
	int lower_reverse;

	for (lower_reverse = 'z'; lower_reverse >= 'a'; lower_reverse--)
	{
		putchar(lower_reverse);
	}
	putchar('\n');
	return (0);
}
