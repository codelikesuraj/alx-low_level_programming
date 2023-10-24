#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t **temp;

	temp = head;
	if (*head)
	{
		free_listint2(&(*head)->next);
		free(*head);
	}

	*temp = NULL;
}
