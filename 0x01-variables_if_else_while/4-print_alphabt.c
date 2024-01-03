/* File: 4-print_alphabt.c */

#include <stdio.h>

/**
 * main - rogram that prints the alphabet in lowercase
 * except q and e
 * can only use putchar and twice
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e')
		{
			continue;
		}
		if (alpha == 'q')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
