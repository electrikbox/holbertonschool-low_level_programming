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
	size_t s1_len, s2_len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	s1_len = (s1 == NULL) ? 0 : _strlen(s1);
	s2_len = (s2 == NULL) ? 0 : _strlen(s2);

	newS = malloc(s1_len + s2_len + 1);

	if (newS == NULL)
		return (NULL);

	if (s1 != NULL)
		_strcpy(newS, s1);
	if (s2 != NULL)
		_strcat(newS, s2);

	return (newS);
}
