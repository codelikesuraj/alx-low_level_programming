#include "lists.h"
#include "4-free_listint.c"

/**
 * free_listint2 - frees a linked list
 * @head: head of the linked list
 */
void free_listint2(listint_t **head)
{
	if (*head)
	{
		free_listint((*head)->next);
		*head = NULL;
	}
}
