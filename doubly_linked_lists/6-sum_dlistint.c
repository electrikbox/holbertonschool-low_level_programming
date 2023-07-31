#include "lists.h"

/**
 * sum_dlistint - addition of all the linked list int data
 * @head: given linked list
 * Return: sum of all linked list data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (!head)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
