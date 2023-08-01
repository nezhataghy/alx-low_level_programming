#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr, *ptr_tmp = *head;

	if (ptr == NULL || head == NULL)
		return (-1);

	if (index)
	{
		while (i < index - 1)
		{
			if (!(ptr_tmp->next))
				return (-1);
			ptr_tmp = ptr_tmp->next;
			i++;
		}
	}
	else
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}

	ptr = ptr_tmp->next;
	ptr_tmp->next = ptr->next;
	free(ptr);
	return (1);
}
