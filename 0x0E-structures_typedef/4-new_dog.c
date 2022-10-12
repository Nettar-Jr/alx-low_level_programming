#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 *
 * @name: name of do
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;

	dog_new = malloc(sizeof(dog_t));

	if (dog_new == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	dog_new->name = name;
	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	dog_new->age = age;

	dog_new->owner = owner;
	if (dog_new == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	return (dog_new);
}
