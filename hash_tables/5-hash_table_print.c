#include "hash_tables.h"

/**
 * hash_table_print - print all key value from table
 * @ht: given table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int Index;
	int printed = 0;
	hash_node_t *currentNode;

	if (ht == NULL)
		return;

	putchar('{');

	for (Index = 0; Index < ht->size; Index++)
	{
		currentNode = ht->array[Index];

		while (currentNode != NULL)
		{
			if (printed)
				printf(", ");

			printed = 1;
			printf("'%s': '%s'", currentNode->key, currentNode->value);
			currentNode = currentNode->next;
		}
	}
	putchar('}');
	putchar('\n');
}
