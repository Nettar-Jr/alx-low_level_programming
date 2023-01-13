#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums up all the data (n) of a linked list
 *
 * @head : pointer to the first node
 *
 * Return: Total sum of n,
 */

int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
