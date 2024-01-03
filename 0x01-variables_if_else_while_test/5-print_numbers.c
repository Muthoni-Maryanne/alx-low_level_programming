/* File: 5-print_numbers.c */

#include <stdio.h>

/**
 * main - prints single digit numbers of base 10 starting from 0
 *
 * Return: 0, always
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
