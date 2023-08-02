#include "lists.h"
/**
 * print_listint_safe - function can print lists with a loop
 * @head: head pointer as input
 * Return:  the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr, *node = NULL;
	size_t num_n, i = 0;

	ptr = head;
	for (; ptr != NULL;)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		i++;
		ptr = ptr->next;
		node = head;
		num_n = 0;
		for (; num_n < i;)
		{
			if (ptr == node)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				return (i);
			}
			node = node->next;
			num_n++;
		}
		if (head == NULL)
			exit(98);
	}
	return (i);
}
