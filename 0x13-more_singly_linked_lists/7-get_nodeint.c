#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 *  of a listint_t linked list
 * @head: head pointer as input
 * @index: index of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}
	return (head);
}
