#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints size of the list
 *
 * @h: pointer to node
 *
 * Return: size of list in (num)
 */

size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		num++;
	}
	return (num);
}
