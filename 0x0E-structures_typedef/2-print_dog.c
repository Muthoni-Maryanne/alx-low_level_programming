/* File: 2-print_dog.c */

#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * If an element of d is NULL, print (nil) instead of this element
 * (if name is NULL, print Name: (nil))
 * If d is NULL print nothing
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
