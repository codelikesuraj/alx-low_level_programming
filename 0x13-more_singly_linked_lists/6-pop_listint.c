#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * of a linked list.
 * @head: head of the linked list
 * Return: the head node's data 'n' or
 * '0' if list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;

	return (n);
}
