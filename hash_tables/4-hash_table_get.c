#include "hash_tables.h"

/**
 * hash_table_get - get value of given key
 * @ht: given hash table
 * @key: given key
 * Return: value if found, NULL if not
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	hash_node_t *currentNode;

	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	currentNode = ht->array[index];

	while (currentNode)
	{
		if (strcmp(key, currentNode->key) == 0)
		{
			value = currentNode->value;
			return (value);
		}
		currentNode = currentNode->next;
	}
	return (NULL);
}
