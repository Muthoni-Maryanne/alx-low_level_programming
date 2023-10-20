/* File: 3-print_alphabets.c */

#include <stdio.h>

/**
 * main - prints alphabet in lower the uppercase
 *
 * can only us putchar
 * all cod should be in main
 * Return: 0, always
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
