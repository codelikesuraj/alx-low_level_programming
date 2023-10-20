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
	list_t *new_node;

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

	while (*head && (*head)->next != NULL)
		*head = (*head)->next;

	new_node->next = NULL;
	*head = new_node;

	return (new_node);
}
