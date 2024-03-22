/* File: 1-strdup.c */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied to new pointer.
 *
 * Return: NULL if str = NULL/little memory, pointer to duplicated string
 */
char *_strdup(char *str)
{
	int i = 0;
	int d = 0;
	int count = 1;
	char *p;
	
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	count += 1;

	p = malloc(sizeof(char) * count);
	if (p == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	while (d < count)
	{
		p[d] = str[d];
		d++;
	}
	return (p);
}
