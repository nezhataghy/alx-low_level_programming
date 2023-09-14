#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: double pointer to the first node.
 * @idx: The position to insert the new node.
 * @n: new node data.
 * Return: the address of the new node on success,
 *         Null if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *ptr = *h;
	unsigned int i;

	if (h)
	{

		if (idx == 0)
			return (add_dnodeint(h, n));

		while (i < idx)
		{
			ptr = ptr->next;
			i++;
			if (ptr == NULL)
				return (NULL);
		}

		if (ptr->next == NULL)
			return (add_dnodeint_end(h, n));

		node = malloc(sizeof(dlistint_t));
		if (node == NULL)
			return (NULL);

		node->n = n;
		node->prev = ptr;
		node->next = ptr->next;
		ptr->next->prev = node;
		ptr->next = node;

		return (node);
	}
	return (NULL);
}
