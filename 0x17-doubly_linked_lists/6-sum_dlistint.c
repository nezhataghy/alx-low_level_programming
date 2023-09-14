#include "lists.h"

/**
 * sum_dlistint - returns the sum of all n
 * of a doubly linked list
 * @head: pointer to the first node
 * Return: sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int somme = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;
		while (head)
		{
			somme += head->n;
			head = head->next;
		}
	}
	return (somme);
}
