#include "lists.h"
/**
 * add_node - adds a new node at beginning of a list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n = malloc(sizeof(list_t));

	if (head == NULL || new_n == NULL)
		return (NULL);
	if (str)
	{
		new_n->str = strdup(str);
		if (new_n->str == NULL)
		{
			return (NULL);
			free(new_n);
		}
		new_n->len = _strlen(new_n->str);
	}
	new_n->next = *head;
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
