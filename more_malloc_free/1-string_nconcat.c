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
 * string_nconcat - concatenate S1 + n first char of s2
 * @s1: given string
 * @s2: given string
 * @n: s2 lenght wanted
 * Return: new array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newArray;
	size_t s1_len;
	size_t s2_len;
	unsigned int i, j;

	s1_len = (s1 == NULL) ? 0 : _strlen(s1);
	s2_len = (s2 == NULL) ? 0 : _strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	newArray = malloc((s1_len + n + 1) * sizeof(char));

	if (newArray == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		newArray[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		newArray[i++] = s2[j];
	}

	newArray[i] = '\0';

	return (newArray);
}
