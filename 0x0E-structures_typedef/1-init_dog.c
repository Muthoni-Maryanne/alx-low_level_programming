/* File: 1-init_dog.c */

#include "dog.h"
#include <stdlib.h>

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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
