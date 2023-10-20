#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the
 * end of a linked list
 * @head: head of the linked list
 * @str: str of the new node
 *
 * Return: address of the new element
 * or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr_node, *new_node;

	curr_node = *head;
	while (curr_node && curr_node->next != NULL)
		curr_node = curr->next;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	if (curr_node)
		curr_node->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
