/* File: 2-strlen.c*/

#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * Prototype: int _strlen(char *s);
 * @s: pointer in main copies parameters to it creating a new pointer
 * variable that points to the string
 *
 * Return: count
 */
int _strlen(char *s)
{
	int index = 0;
	int length = 0;

	while (s[index] != '\0')
	{
		index++;
		length++;
	}
	return (length);
}
