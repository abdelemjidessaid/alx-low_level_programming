#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table data.
 * @ht: pointer of hash table.
 * Return: void.
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;
	int first = 1;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];

		while (head && head->key)
		{
			if (first)
			{
				first = 0;
				printf("'%s': '%s'", head->key, head->value);
				head = head->next;
				continue;
			}
			printf(", '%s': '%s'", head->key, head->value);
			head = head->next;
		}
	}
	printf("}\n");
}
