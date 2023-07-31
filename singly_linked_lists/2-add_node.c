#include "lists.h"
#include <string.h>

/**
* add_node - add a new node at list begining
* @head: list linked
* @str: string for the new node
* Return: new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
