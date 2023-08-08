#include "hash_tables.h"

/**
 * key_index - get index
 * @key: given key in string
 * @size: hash table size
 * Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*hash value is all ascii addition*/
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
