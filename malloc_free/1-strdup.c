#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate string
 * @str: given string
 * Return: duplicate string
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = malloc(strlen(str));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
