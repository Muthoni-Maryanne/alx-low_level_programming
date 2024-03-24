/* File: 2-print_dog.c */

#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer that points to/holds address of struct dog my_dog
 *
 * If an element of d is NULL, print (nil) instead of this element
 * (if name is NULL, print Name: (nil))
 * If d is NULL print nothing
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %d\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
