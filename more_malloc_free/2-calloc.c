#include "main.h"
#include <stdlib.h>

/**
 * _calloc - set pointer
 * @nmemb: array lenght
 * @size: type size
 * Return: return new pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	char *charPtr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	charPtr = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		charPtr[i] = 0;
	}

	return (ptr);
}
