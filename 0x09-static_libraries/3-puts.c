/* File: 3-puts.c */

#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * Prototype: void _puts(char *str);
 * @str: pointer str in main will be copied to new pointer str
 *
 * Return: void
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
