/* File: 2-print_alphabet.c */

#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase,
 * only use the putchar function,
 * all your code should be in the main function,
 * can only use putchar twice in your code
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
