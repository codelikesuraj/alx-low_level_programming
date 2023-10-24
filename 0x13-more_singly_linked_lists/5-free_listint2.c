#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of the linked list
 */
void free_listint2(listint_t **head)
{
	if (*head)
	{
		free_listint2(&(*head)->next);
		free(*head);
	}

	*head = NULL;
}
