/* File: 1-swap.c */

#include "main.h"

/**
 * main - function that swaps the values of two integers
 *
 * Return: 0, always.
 */
void swap_int(int *a, int *b)
{
 *a = 42;
 *b = 98;
}

int main(void)
{
 int a = 98;
 int b = 42;
 int *p1;
 int *p2;

 p1 = &a;
 p2 = &b;
 swap_int(p1, p2);

 return (0);
}
