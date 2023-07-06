#include "hash_tables.h"

/**
 * hash_djb2 - this is the hash function.
 * Return: the index.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c, i = 0;

    hash = 5381;
	c = str[i];
    while (str[i])
    {
        hash = ((hash << 5) + hash) + c;
		c = str[++i];
    }
    return (hash);
}