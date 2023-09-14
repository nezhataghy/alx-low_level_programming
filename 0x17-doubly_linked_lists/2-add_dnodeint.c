#include "lists.h"
/**
 * add_dnodeint - Adds a node to the begining of a linked list.
 * @head: double ptr to the first node of a linked list.
 * @n: value to add to a linked list node.
 * Return: the address of the new node on success,otherwise NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head != NULL)
		(*head)->prev = node;
	*head = node;

	return (node);
}
