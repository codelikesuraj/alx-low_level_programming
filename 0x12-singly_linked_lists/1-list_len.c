#include "lists.h"
#include <stdio.h>

/**
 * list_len - gets number of elements
 * in a linked list
 * @h: list_t list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
