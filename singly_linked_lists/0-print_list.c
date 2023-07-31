#include "lists.h"

/**
 * print_list - print data from list linked
 * @h: list linked node
 * Return: list linked length
 */
size_t print_list(const list_t *h)
{
	size_t listLen = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while (h != NULL)
	{
		listLen++;
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (listLen);
}
