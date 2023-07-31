#include "lists.h"
/**
 * print_listint - prints all the elements of a list.
 * @h: head pointer as input
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	for (; h;)
	{
		printf("%d\n", h->n);
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
