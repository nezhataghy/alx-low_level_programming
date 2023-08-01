#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t
 * @head: pointer to the first node
 * Return: somme or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int somme = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		somme += head->n;
		head = head->next;
	}
	return (somme);
}
