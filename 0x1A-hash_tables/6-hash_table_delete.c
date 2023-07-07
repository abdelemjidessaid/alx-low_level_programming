#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes frees hash table.
 * @ht: pointer to hash table.
 * Return: void.
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];

		while (head)
		{
			tmp = head;
			head = head->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp->next);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}
