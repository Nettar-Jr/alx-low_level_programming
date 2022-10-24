#include <stdio.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of
 * elements in a singly linke list
 *
 * @h: An element
 *
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	int num = 0;

	while (h != 0)
	{
		h = h->next;
		num++;
	}
	return (num);
}
