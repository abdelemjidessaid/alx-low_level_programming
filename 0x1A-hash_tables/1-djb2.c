#include "hash_tables.h"

/**
 * hash_djb2 - this is the hash function.
 * @key: string of key that should converted to number.
 * Return: the index.
*/
unsigned long int hash_djb2(const unsigned char *key)
{
	unsigned long int hash;
	int c, i = 0;

	hash = 5381;
	c = key[i];
	while (key[i])
	{
		hash = ((hash << 5) + hash) + c;
		c = key[++i];
	}
	return (hash);
}
