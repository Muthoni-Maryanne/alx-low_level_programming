/* File: 4-print_alphabt.c */

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * all except q and e
 *
 * Return: 0, always
 */
int main(void)
{
	char lower = 'a';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == 'e')
		{
			continue;
		}
		if (lower == 'q')
		{
			continue;
		}
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
