/* File: 6-abs.c */

#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @j: number to be checked
 *
 * Prototype: int _abs(int);
 *
 * Return:0 if 0, j if positive, -j if negative
 */
int _abs(int j)
{
	if (j < 0)
	{
		return (j * -1);
	}
	else if (j > 0)
	{
		return (j);
	}
	else
	{
		return (0);
	}
}
