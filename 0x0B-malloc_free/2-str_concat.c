/* File: 2-str_concat.c */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL on failure, pointer to concatenated string on success
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int count = 1;
	int ncount = 1;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[i++] != '\0')
	{
		count++;
	}
	while (s2[j++] != '\0')
	{
		ncount++;
	}
	p = malloc(sizeof(char) * (count + ncount - 1));
	if (p == NULL)
	{
		return (NULL);
	}
	while (k < count - 1)
	{
		p[k] = s1[k];
		k++;
	}
	while (l < ncount)
	{
		p[k + l] = s2[l];
		l++;
	}
	return (p);
}
