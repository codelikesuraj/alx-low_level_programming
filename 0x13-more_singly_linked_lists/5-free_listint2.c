#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (*head)
	{
		next = (*head)->next;
		free_listint2(&next);
		free(*head);
	}	
	*head = NULL;
}
