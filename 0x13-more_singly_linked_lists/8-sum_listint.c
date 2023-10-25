#include "lists.h"

/**
 * sum_listint - calculates the sum of
 * all the data(n) of a linked list
 * @head: pointer to the starting node
 * Return: sum of all the data (n) in
 * the linked list, or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
