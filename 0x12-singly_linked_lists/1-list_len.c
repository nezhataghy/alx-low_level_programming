#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int n_nodes = 0;

	while (h != NULL)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
