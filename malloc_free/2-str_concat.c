#include "main.h"
#include <stdlib.h>

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
 * _strcat - concatenate strings
 * @dest: to
 * @src: from
 * Return: return concatenate string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * str_concat - concatenate strings
 * @s1: given string
 * @s2: given string
 * Return: new concatenate string
 */

char *str_concat(char *s1, char *s2)
{
	char *newS;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	newS = malloc(_strlen(s1) + (_strlen(s2) + 1));

	if (newS == NULL)
		return (NULL);

	_strcat(newS, s1);
	_strcat(newS, s2);

	return (newS);
}
