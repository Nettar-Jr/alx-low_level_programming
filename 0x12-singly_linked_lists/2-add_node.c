#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - A function that adds a new element to the
 * begining of the list
 *
 * @head: first element of the list
 * @str: string to be added
 *
 * Return: address of the element
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t len;
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	len = strlen(str);
	temp->len = len;
	temp->str = strdup(str);
	temp->next = *head;

	*head = temp;

	return (*head);
}
