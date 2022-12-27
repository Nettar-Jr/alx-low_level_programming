#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Append new element to list
 *
 * @head: element to be added
 * @str: string to be added
 *
 * Return: new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *old_node;
	size_t num;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	num = strlen(str);
	new_node->len = num;
	new_node->str = strdup(str);
	new_node->next = NULL;

	old_node = *head;

	if (old_node == NULL)
		*head = new_node;
	else
	{
		while (old_node->next != NULL)
		{
			old_node = old_node->next;
		}
		old_node->next = new_node;
	}

	return (*head);
}
