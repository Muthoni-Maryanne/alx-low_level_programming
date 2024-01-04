/* File: 1-alphabet.c */

#include "main.h"

/**
 * print_alphabet -prints the alphabet, in lowercase
 * followed by a new line
 * can only us putchar, twice
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return;
}
