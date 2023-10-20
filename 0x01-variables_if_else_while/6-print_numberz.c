/* File: 6-print_numberz.c */

#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * followed by a new line
 * not allowed to use any variable of type char
 * can only use the putchar function and twice
 * All your code should be in the main function
 * Return: 0, always
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
