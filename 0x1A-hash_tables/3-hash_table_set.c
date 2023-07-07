#include "hash_tables.h"

/**
 * hash_table_set - function that adds new an element to the hash table.
 * @ht: pointer to the hash table.
 * @key: pointer to the key.
 * @value: pointer to the value.
 * Return: 1 if add success, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *head, *new;

	if (!ht || !key || !value)
		return (0);
	i = key_index((unsigned char *) key, ht->size);
	head = ht->array[i];
	if (!head)
	{
		ht->array[i] = malloc(sizeof(hash_node_t));
		if (ht->array[i] == NULL)
			return (0);
		ht->array[i]->key = strdup(key);
		ht->array[i]->value = strdup(value);
		ht->array[i]->next = NULL;
		return (1);
	}

	while (head)
	{
		if (head->key && strcmp(key, head->key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[i];

	ht->array[i] = new;
	return (1);
}
