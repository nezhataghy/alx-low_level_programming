#include "lists.h"
/**
 * print_dlistint - prints all the elem of a dlistint_t list
 * @h: head of the linked list
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	if (h == NULL)
		return (size);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
