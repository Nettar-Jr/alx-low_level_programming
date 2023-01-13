#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - finds a specific node in a linked list
 *
 * @head : pointer to the first node of a linked list
 *
 * @index: index of the node to find
 *
 * Return: pointer to the given node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
		return (NULL);

	return (head);
}
