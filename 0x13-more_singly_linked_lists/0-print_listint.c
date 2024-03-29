#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the
 * elemnts of a linked list
 * @h: list_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
