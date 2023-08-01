#include "lists.h"
/**
 * reverse_listint - reverses a listint_t
 * @head: pointer to head
 * Return: a pointer to the first node of the list after the reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2, *ptr = *head;

	if (head == NULL || ptr == NULL)
		return (NULL);
	if (ptr->next == NULL)
		return (ptr);
	tmp1 = NULL;
	while (ptr != NULL)
	{
		tmp2 = ptr->next;
		ptr->next = tmp1;
		tmp1 = ptr;
		ptr = tmp2;
	}
	ptr = tmp1;
	*head = ptr;
	return (ptr);
}
