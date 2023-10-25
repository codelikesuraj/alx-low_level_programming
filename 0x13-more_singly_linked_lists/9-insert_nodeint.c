#include "lists.h"
#include "2-add_nodeint.c"

/**
 * insert_nodeint_at_index - inserts a
 * new node at a given position
 * @head: address of the head pointer
 * @idx: index to be inserted
 * @n: data to be store in the new node
 * Return: address of the new node, or
 * NULL if it fails, or NULL if node
 * cannot be added at index 'idx'
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr_node;
	listint_t *new_node;
	unsigned int index = 0;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		free(new_node);

	if (head == NULL || *head == NULL || new_node == NULL)
		return (NULL);

	curr_node = *head;
	new_node->n = n;

	while (curr_node)
	{
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (*head);
		}

		if (idx == index + 1)
		{
			new_node->next = curr_node->next;
			curr_node->next = new_node;
			return (curr_node);
		}
		curr_node = curr_node->next;
		index++;
	}

	return (NULL);
}
