/* 3-print_alphabets.c */

#include <stdio.h>

/**
 * main -prints the alphabet in lowercase, and then in uppercase
 * can only use the putchar function
 * 3 times max
 *
 * Return: 0
 */
int main(void)
{
	char l, u;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
