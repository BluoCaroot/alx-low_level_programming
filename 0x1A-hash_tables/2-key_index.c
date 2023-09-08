#include "hash_tables.c"
/**
 * key_index - return index of the given key's value
 * @key: the key given by user
 * @size: size of the hash table
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
