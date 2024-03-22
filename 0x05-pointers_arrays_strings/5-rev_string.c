/* File: 5-rev_string.c */

#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * Prototype: void rev_string(char *s);
 * @s: pointer of array,s, in main copies values to
 * this pointer in rev_string() function
 *
 * Return: void
 */
void rev_string(char *s)
{
	int count = 0;
	int index = 0;

	while (s[index] != '\0')
	{
		count++;
		index++;
	}

	index = index - 1;

	while (index >= 0)
	{
		int num = 0;
	
		s[num++] = s[index--];
	}
	/*printf("\n");*/
}
