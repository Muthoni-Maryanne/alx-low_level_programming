/* File: 6-puts2.c */

#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * starting with the first character, followed by a new line
 * Prototype: void puts2(char *str);
 * @str: pointer str in main will be copied to new pointer str
 *
 * Return: void
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}
	_putchar('\n');
}
