/* File: 6-print_numberz.c */

#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * not allowed to use any variable of type char
 * can only use the putchar function
 * can only use putchar twice in your code
 *
 * Return: 0
 */
int main(void)
{
	int b_10;

	for (b_10 = 48; b_10 <= 57; b_10++)
	{
		putchar(b_10);
	}
	putchar('\n');
	return (0);
}
