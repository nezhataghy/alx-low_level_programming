#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given postion
 * @head: pointer to head
 * @idx: index
 * @n: new node data
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr, *ptr_tmp = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL || head == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (idx)
	{
		while (i < idx - 1 && ptr_tmp != NULL)
		{
			ptr_tmp = ptr_tmp->next;
			i++;
		}
		if (ptr_tmp == NULL)
			return (NULL);
	}
	else
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	ptr->next = ptr_tmp->next;
	ptr_tmp->next = ptr;
	return (ptr);
}
