#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize the dog structure
 *
 * @d: pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
