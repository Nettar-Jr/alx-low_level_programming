#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees space alloacated to linked list
 *
 * @head: head to the linked list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
