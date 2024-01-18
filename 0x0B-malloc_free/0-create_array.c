/* File: 0-create_array.c */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array -function that creates an array of chars
 * and initializes it with a specific char.
 * @size: number of elements to create space in memory for
 * @c: char which is to fill space in memory created
 *
 * Prototype: char *create_array(unsigned int size, char c);
 * Returns NULL if size = 0
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = (char *)malloc(sizeof(c) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
