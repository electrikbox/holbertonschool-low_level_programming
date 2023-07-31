#include "lists.h"

/**
 * list_len - simply return length of list linked
 * @h: list linked node
 * Return: list linked length
 */
size_t list_len(const list_t *h)
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
