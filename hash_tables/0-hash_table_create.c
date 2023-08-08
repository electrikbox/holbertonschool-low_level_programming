#include "hash_tables.h"

/**
 * hash_table_create - create an empty hash table
 * @size: size of the table
 * Return: new created table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable = malloc(sizeof(hash_table_t));

	if (!newHashTable)
		return (NULL);

	newHashTable->size = size;
	newHashTable->array = calloc(size, sizeof(hash_node_t *));

	if (newHashTable->array == NULL)
	{
		free(newHashTable);
		return (NULL);
	}

	return (newHashTable);
}
