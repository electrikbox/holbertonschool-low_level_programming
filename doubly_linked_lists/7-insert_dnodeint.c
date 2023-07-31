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
	dlistint_t *newNode, *temp;
	unsigned int count = 0;

	if (*h == NULL)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}

	temp = *h;

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			newNode = malloc(sizeof(dlistint_t));
			if (newNode == NULL)
				return (NULL);

			newNode->n = n;
			newNode->prev = temp;
			newNode->next = temp->next;
			temp->next = newNode;

			if (newNode->next != NULL)
				newNode->next->prev = newNode;

			return (newNode);
		}
		count++;
		temp = temp->next;
	}

	return (NULL);
}
