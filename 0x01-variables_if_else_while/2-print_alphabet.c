/* File: 2-print_alphabet.c */

#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 * can only use the putchar function and twice
 *
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
