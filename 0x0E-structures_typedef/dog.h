#ifndef DOG_H
#define DOG_H

/**
 * struct dog -struct that stores dog information
 * @name: pointer to string
 * @age: float
 * @owner: pointer to string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
