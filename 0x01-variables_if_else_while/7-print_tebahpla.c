/* 7-print_tebahpla.c */

#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *  can only use the putchar function twice
 *
 *  Return: 0
 */
int main(void)
{
	int rev;

	for (rev = 122; rev >= 97; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
