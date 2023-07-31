#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: head pointer as input.
 * @n: number to insert into element.
 * Return: the number of nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (ptr == NULL)
		*head = new_node;
	else
	{
		for (; ptr->next;)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	return (new_node);
}
