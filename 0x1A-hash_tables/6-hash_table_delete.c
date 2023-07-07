#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes frees hash table.
 * @ht: pointer to hash table.
 * Return: void.
*/
void hash_table_delete(hash_table_t *ht)
{
	size_t i = 0;
	hash_node_t *head = NULL, *temp = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			head = ht->array[i];
			while (head)
			{
				free(head->key);
				free(head->value);
				temp = head;
				head = head->next;
				free(temp);
			}
		}
	}

	free(ht->array);
	free(ht);
}
