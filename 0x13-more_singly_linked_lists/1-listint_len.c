#include "lists.h"
/**
 * listint_len - counts the num of the elements in a list.
 * @h: head pointer as input
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	for (; h;)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
