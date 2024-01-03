/* File: 5-print_numbers.c */

#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	char b_10;

	for (b_10 = '0'; b_10 <= '9'; b_10++)
	{
		putchar(b_10);
	}
	putchar('\n');
	return (0);
}
