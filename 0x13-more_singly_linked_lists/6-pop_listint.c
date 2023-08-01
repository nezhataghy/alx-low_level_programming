#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: double pointer head as input
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int node_data;

	if (head == NULL || *head == NULL)
		return (0);
	ptr = *head;
	*head = ptr->next;
	node_data = ptr->n;
	free(ptr);
	return (node_data);
}
