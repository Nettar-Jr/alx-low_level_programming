#include <stdio.h>
#include "lists.h"

/**
 *  print_listint - prints the number on node in a list
 *
 * @h: Pointer to first item on the list
 *
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
