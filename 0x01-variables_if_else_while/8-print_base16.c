/* File: 8-print_base16.c */

#include <stdio.h>

/**
 * main -program that prints all the numbers of base 16 in lowercase
 * can only use putchar and thrice
 *
 * Return: 0
 */
int main(void)
{
	char a, b;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
