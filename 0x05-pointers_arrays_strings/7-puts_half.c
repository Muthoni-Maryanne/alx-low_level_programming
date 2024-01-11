/* File: 7-puts_half.c */

#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * Prototype: void puts_half(char *str);
 * @str: pointer str in main will be copied to new pointer str
 *
 * If the number of characters is odd
 * the function should print the last n characters of the string, where
 * n = (length_of_the_string - 1) / 2
 *
 * Return: void
 */
void puts_half(char *str)
{
	int index = 0;
	int count = 0;

	while (str[index] != '\0')
	{
		index++;
		count++;
	}

	if (count % 2 == 0)
	{
		int a = count / 2;

		while (a < count)
		{
			index = a;
			_putchar(str[index]);
			a++;
		}
	}

	else if (count % 2 != 0)
	{
		int b = (count - 1) / 2;

		while (b <= count)
		{
			index = b + 1;
			_putchar(str[index]);
			b++;
		}
	}
	_putchar('\n');
}
