#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the head pointer
 * @idx: Index where the node should be added
 * @n: The data inserted in the node
 *
 * Return: The address of the new node, OTHERWISE return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *traverse;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!*head)
		new_node->next = NULL;
	else if (*head && idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	traverse = *head;

	while (idx > 1 && traverse)
	{
		traverse = traverse->next;
		idx--;
	}

	if (!traverse)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = traverse->next;
	traverse->next = new_node;

	return (new_node);
}
