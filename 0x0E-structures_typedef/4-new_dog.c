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
	int i, nameLen, ownerLen;

	dog_t *dog_new;

	dog_new = malloc(sizeof(dog_t));

	if (dog_new == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	nameLen = 0;
	if (name[nameLen] != '\0')
		nameLen++;
	dog_new->name = malloc(sizeof(nameLen + 1));

	if (dog_new->name == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}

	for (i = 0; i < nameLen; i++)
		dog_new->name[i] = name[i];

	dog_new->age = age;

	ownerLen = 0;
	if (owner[ownerLen] != '\0')
		ownerLen++;
	dog_new->owner = malloc(sizeof(ownerLen + 1));

	for (i = 0; i < ownerLen; i++)
		dog_new->owner[i] = owner[i];

	return (dog_new);
}
