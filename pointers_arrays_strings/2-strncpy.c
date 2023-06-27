#include "main.h"

/**
 * _strncpy - copy string from src to dest
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: int
 *
 * Return: return destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
