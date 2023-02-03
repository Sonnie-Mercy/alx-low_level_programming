#include "hash_tables.h"

/**
 * key_index - gives you the key of an index
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: The key of an index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
