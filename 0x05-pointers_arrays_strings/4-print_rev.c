/* File: 4-print_rev.c */

#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * Prototype: void print_rev(char *s);
 * @s: pointer str from main copies value to this new pointer
 *
 * Return: void
 */
void print_rev(char *s)
{
	int index = 0;
	int length = 0;

	while (s[index] != '\0')
	{
		index++;
		length++;
	}

	index = index - 1;

	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
