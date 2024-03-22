/* File: 2-print_alphabet_x10.c */

#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count <= 9)
	{
		char ax10 = 'a';

		while (ax10 <= 'z')
		{
			_putchar(ax10);
			ax10++;
		}
		_putchar('\n');
		count++;
	}
}

