/* File: 2-main.c */

#include <stdio.h>

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
		putchar(s[index]);
		index++;
	}
	putchar('\n');

	return (0);
}
