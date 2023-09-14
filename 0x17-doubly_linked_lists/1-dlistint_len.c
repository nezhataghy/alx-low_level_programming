#include "lists.h"
/**
 * dlistint_len - returns the number of elements in
 * the doubly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	if (h == NULL)
		return (length);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
