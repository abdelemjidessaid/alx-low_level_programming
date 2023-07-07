#include "hash_tables.h"

hash_node_t *allocate_new_node();
void free_allocated(hash_node_t **array, unsigned long int bound);

/**
 * hash_table_create - function that creates a hash table
 * and returns its pointer.
 * @size: the size of table's array.
 * Return: pointer to the created hash table, NULL if something
 * went wrong.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **node_array;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;

	node_array = malloc((size + 1) * sizeof(hash_node_t *));
	if (node_array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		node_array[i] = allocate_new_node();
		if (node_array[i] == NULL)
		{
			free_allocated(node_array, i);
			free(table);
			return (NULL);
		}
	}
	node_array[i] = NULL;
	table->array = node_array;
	return (table);
}

/**
 * allocate_new_node - function that creates new node pointer.
 * Return: pointer to the new node, NULL if fails.
*/
hash_node_t *allocate_new_node()
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = NULL;
	node->next = NULL;
	node->value = NULL;

	return (node);
}

/**
 * free_allocated - function that frees the allocated nodes in node array.
 * @array: pointer of array of nodes.
 * @bound: the number of node that are allocated.
 * Return: void.
*/
void free_allocated(hash_node_t **array, unsigned long int bound)
{
	unsigned long int i;

	for (i = 0; i < bound; i++)
		free(array[i]);

	free(array);
}
