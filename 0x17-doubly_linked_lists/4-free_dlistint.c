#include "lists.h"
/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head != NULL)
		while (head->prev)
			head = head->prev;

	for (; head != NULL;)
	{
		ptr = head->next->next;
		free(ptr->prev);
		head = ptr;
	}
}
