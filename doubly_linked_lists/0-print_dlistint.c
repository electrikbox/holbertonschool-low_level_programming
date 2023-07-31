#include "lists.h"

/**
 * print_dlistint - print data from linked list
 * @h: given linked list
 * Return: linked list length
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t hLen = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		hLen++;
		h = h->next;
	}

	return (hLen);
}

/**
 * _print_dlistint_backward - print data from linked list
 * @h: given linked list
 * Return: linked list length
*/
size_t _print_dlistint_backward(const dlistint_t *h)
{
	size_t hLen = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);

	while (temp->next != NULL)
		temp = temp->next;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		hLen++;
		temp = temp->prev;
	}

	return (hLen);
}
