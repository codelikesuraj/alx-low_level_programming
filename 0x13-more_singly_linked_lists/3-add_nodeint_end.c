#include "lists.h"

/**
 * add_nodeint_end - adds a new node at
 * the end of a linked list
 * @head: head of the linked list
 * @n: n value of the node
 * Return: address of the new element
 * or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cursor, *node;

	cursor = *head;
	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	while (cursor && cursor->next)
		cursor = cursor->next;

	node->n = n;

	if (cursor)
		cursor->next = node;
	else
		*head = node;

	return (node);
}
