/* File: 2-main.c */

#include "main.h"

/**
 * main- prints the name of the file it was compiled from
 * You are allowed to use the standard library
 *
 * Return: 0
 */
int main(void)
{
	char *s;
	int index = 0;

	s = __FILE__;
	while (s[index] != '\0')
	{
		_putchar(s[index]);
		index++;
	}
	_putchar('\n');

	return (0);
}
