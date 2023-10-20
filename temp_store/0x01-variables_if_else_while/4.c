/* File: 4-print_alphabt.c */

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Print all the letters except q and e
 * can only use the putchar function
 * code should be in the main function
 * can only use putchar twice in your code
 * Return: 0, Always.
 */
int main(void)
{
	char lower_24;

	for (lower_24 = 'a'; lower_24 <= 'z'; lower_24++)
	{
		if (lower_24 == 'e' && lower_24 == 'q')
		{
			continue;
		}
		putchar(lower_24);
	}
	putchar('\n');
	return (0);
}
