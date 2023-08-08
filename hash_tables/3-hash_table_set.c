#include "hash_tables.h"

/**
 * hash_table_set - set a new non null node in table
 * @ht: given table
 * @key: given key
 * @value: given value
 * Return: 1 on success, 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode, *currentNode;

	if (!ht || !key || key[0] == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	currentNode = ht->array[index];

	/* check if key already exist */
	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			free(currentNode->value);
			currentNode->value = strdup(value);
			return (1);
		}
		currentNode = currentNode->next;
	}

	/* key doesn't already exist */
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	if (!newNode->value || !newNode->key)
	{
		free(newNode->value);
		free(newNode->key);
		free(newNode);
		return (0);
	}
	return (1);
}
