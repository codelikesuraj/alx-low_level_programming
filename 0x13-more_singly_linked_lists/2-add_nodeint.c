#include "lists.h"

/**
 * add_nodeint - adds a new node at the
 * beginning of a linked list
 * @head: head of a listint_list
 * @n: value of n of new node
 * Return: address of the new element, or NULL on error.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
