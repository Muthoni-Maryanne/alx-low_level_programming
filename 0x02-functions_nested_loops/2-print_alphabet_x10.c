/* File: 2-print_alphabet_x10.c */

#include "main.h"

/**
 * print_alphabet_x10- void print_alphabet_x10 -prints 10 times the alphabet
 * in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 0; i <= 9; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
