#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print out the dog structrure
 *
 * @d: pointer to dog structure
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		printf("nil");
	else
		printf("Name: %s\n", d->name);

	if (!d->age)
		printf("nil");
	else
		printf("Age: %f\n", d->age);

	if (!d->owner)
		printf("nil");
	else
		printf("Owner: %s\n", d->owner);
}
