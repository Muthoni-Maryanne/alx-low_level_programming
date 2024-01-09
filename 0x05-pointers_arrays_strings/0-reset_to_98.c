/* File: 0-reset_to_98.c */

#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter,
 * updates the value it points to to 98
 * @n: pointer &n from main is copied to this pointer in reset_to_98()
 *
 * Prototype: void reset_to_98(int *n);
 *
 * Return: 0
 */
void reset_to_98(int *n)
{
	*n = 98;
}
