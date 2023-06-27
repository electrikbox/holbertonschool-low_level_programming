#include "main.h"

/**
 * _strncat - concatenate 2 strings
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: int
 *
 * Return: return the concatenate strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[i] = src[j];
		}
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}