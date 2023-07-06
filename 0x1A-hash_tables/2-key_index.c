#include "hash_tables.h"

/**
 * key_index - function that creates the index from key and size.
 * @key: pointer of the key.
 * @size: the size of array that contains the node's headers.
 * Return: the index of the target node's header.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, dj;

	dj = hash_djb2(key);
	index = dj % size;

	return (index);
}
