/* File: 1-init_dog.c */

#include "dog.h"
#include <stdio.h>

/**
 * init_dog -initialize a variable of type struct dog
 * @age: float for age member of struct
 * @owner: pointer for string member of struct for owner name
 * @name: pointer for string member of struct for dog name
 * @d: pointer to struct
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}

	(*d).name = "Poppy";
	d->age = 3.5;
	d->owner = "Bob";
}
