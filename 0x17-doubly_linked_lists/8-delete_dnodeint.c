#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int i = 0;

	if (*head)
	{
		while (i < index)
		{
			if (!ptr)
				return (-1);
			ptr = ptr->next;
			i++;
		}

		if (ptr == *head)
		{
			*head = ptr->next;
			if (*head)
				(*head)->prev = NULL;
		}
		else
		{
			ptr->prev->next = ptr->next;
			if (ptr->next)
				ptr->next->prev = ptr->prev;
		}

		free(ptr);
		return (1);
	}
	return (-1);
}
