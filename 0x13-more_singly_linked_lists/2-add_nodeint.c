#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning of a list.
 * @head: head pointer as input.
 * @n: number to insert into element.
 * Return: the number of nodes.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
