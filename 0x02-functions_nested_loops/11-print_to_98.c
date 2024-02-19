/* File: 11-print_to_98.c */

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: number to print from
 *
 * Prototype: void print_to_98(int n);
 *
 * Return: the number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (1)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		while (1)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar('\n');
}
