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
	unsigned int len;
	list_t *temp;

	temp = malloc(sizeof(list_t));

	len = strlen(str);
	temp->len = len + 1;
	temp->str = strdup(str);
	temp->next = *head;

	*head = temp;

	if (!head)
		return (*head);
	else
		return (NULL);
}
