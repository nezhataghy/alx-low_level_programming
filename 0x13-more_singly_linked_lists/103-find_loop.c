#include "lists.h"
/**
 * find_listint_loop - finds the start of a loop in a linked list
 * @head: pointer to the first node of the list
 * Return: The address of the node where the loop starts,
 *  or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1 = head;
	listint_t *ptr2 = head;

	if (head == NULL)
		return (NULL);

	for (; ptr1 && ptr2 && ptr2->next;)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;
		if (ptr2 == ptr1)
		{
			ptr1 = head;
			for (; ptr1 != ptr2;)
			{
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}
			return (ptr2);
		}
	}

	return (NULL);
}
