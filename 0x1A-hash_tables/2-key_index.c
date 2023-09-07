#include "hash_tables.h"

/**
 * key_index - Gets index at which a key/value
 * Pair should be stored in array of hash table.
 * @key: key to get index of.
 * @size: size of array of the hash table.
 *
 * Return: index of the key.
 * Description: it uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
