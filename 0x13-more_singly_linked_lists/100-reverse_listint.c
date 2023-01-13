#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - a function thate reverses a linked list.
 *
 * @head: pointer to first node on list
 *
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	prev = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
