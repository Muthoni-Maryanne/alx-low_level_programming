/* File: 2-print_alphabet.c */

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * can only use the putchar function
 * All your code should be in the main function
 * Return: 0, always
 */
int main(void)
{
	int lower;

	for (lower = 'a' ; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
