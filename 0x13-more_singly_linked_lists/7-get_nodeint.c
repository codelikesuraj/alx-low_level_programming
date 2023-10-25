#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth
 * node of a linked list
 * @head: pointer to the first node
 * @index: index to get
 * Return: pointer to the nth node or
 * NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head && n++ < index)
		head = head->next;

	return (head);
}
