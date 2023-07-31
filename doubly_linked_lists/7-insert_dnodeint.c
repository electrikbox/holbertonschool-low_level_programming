#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at index
 * @h: given linked list
 * @idx: index when new node should be added
 * @n: data for new node
 * Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp = *h;
	unsigned int count = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL || h == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;

	while (count < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		count++;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode->prev = temp;
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
