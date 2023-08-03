#include "lists.h"
/**
 * free_listint_safe - frees safely a linked list
 * @h: pointer to the head
 * Return:  the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	size_t num = 0;
	int i;

	if (h == NULL || *h == NULL)
		return (0);

	for (; *h != NULL;)
	{
		i = *h - (*h)->next;
		if (i < 0)
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
		else
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			num++;
		}
	}
	return (num);
}
