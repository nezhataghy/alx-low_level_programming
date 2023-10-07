#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptr;
	char *seperator;

	if (ht == NULL)
		return;

	printf("{");
	seperator = "";

	while (i < ht->size)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			printf("%s'%s': '%s'", seperator, ptr->key, ptr->value);
			seperator = ", ";
			ptr = ptr->next;
		}
		i++;
	}
	printf("}\n");
}
