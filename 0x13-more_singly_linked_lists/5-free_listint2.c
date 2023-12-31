#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: head pointer as input
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	for (; *head;)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
