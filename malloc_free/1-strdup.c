#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - copy string from src to dest
 * @dest: destination
 * @src: source
 * Return: return destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - give the array lenght
 * @s: function parameter
 * Return: return the lenght
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

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

	duplicate = malloc(_strlen(str) + 1);

	if (duplicate == NULL)
		return (NULL);

	_strcpy(duplicate, str);

	return (duplicate);
}
