#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * and returns its pointer.
 * @size: the size of table's array.
 * Return: pointer to the created hash table, NULL if something
 * went wrong.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (size <= 0)
	{
		return (NULL);
	}
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
