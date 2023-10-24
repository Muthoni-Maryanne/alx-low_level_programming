/* File: 1-alphabet.c */

#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
