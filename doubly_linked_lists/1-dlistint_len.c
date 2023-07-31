#include "lists.h"

/**
 * dlistint_len - simply return length of list linked
 * @h: list linked node
 * Return: list linked length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t listLen = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		listLen++;
		h = h->next;
	}

	return (listLen);
}
