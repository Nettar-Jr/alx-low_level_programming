#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - adds a node to a given
 * position of a linked list
 *
 * @head : pointer to firts node on a linked list
 *
 * @idx : posotion to add new node
 *
 * @n : member of new node
 *
 * Return: pointer to new node,
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
