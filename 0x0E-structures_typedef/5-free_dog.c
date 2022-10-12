#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory allocated to dog struct
 *
 * @d: location of dog structure
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
