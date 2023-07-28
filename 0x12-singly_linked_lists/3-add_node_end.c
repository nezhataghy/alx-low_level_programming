#include "lists.h"

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n = malloc(sizeof(list_t));
	list_t *nod = *head;
	if (head == NULL || new_n == NULL)
		return (NULL);
	if (str != NULL)
	{
		new_n->str = strdup(str);
		if (new_n->str == NULL)
		{
			free(new_n);
			return (NULL);
		}
		new_n->len = _strlen(new_n->str);
	}
	if (nod != NULL)
	{
		for (;nod->next;)
			nod = nod->next;
		nod->next = new_n;
	}
	else
		*head = new_n;
	return (new_n);
}

/**
 * _strlen - returns the length of a string
 * @s: input
 * Return: i
*/

int _strlen(char *s)
{
int i;

i = 0;
for (; *s != '\0'; s++)
	i++;
return (i);
}
