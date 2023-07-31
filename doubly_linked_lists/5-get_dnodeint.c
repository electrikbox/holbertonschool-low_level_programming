#include "lists.h"

/**
 * get_dnodeint_at_index - get node at given index
 * @head: given linked list
 * @index: given index
 * Return: node at gven index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *nodeAtIndex;

	if (head == NULL)
		return (NULL);

	nodeAtIndex = head;

	while (nodeAtIndex != NULL)
	{
		if (count == index)
			return (nodeAtIndex);

		count++;
		nodeAtIndex = nodeAtIndex->next;
	}

	return (NULL);
}
