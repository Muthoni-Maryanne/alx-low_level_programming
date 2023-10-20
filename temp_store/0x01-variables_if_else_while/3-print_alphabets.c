/* File: 3-print_alphabets.c */

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then in uppercase
 *
 * can only use the putchar function
 * code should be in the main function
 * can only use putchar three times in your code
 * Return: 0, Always.
 */
int main(void)
{
	char lowercase, uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
