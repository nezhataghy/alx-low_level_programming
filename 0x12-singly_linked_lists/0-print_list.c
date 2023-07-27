#include "lists.h"
/**
 * print_list - prints all the elements of a list.
 * @h: pointer as input
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int n_nodes = 0;

	while (h != NULL)
	{

		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
