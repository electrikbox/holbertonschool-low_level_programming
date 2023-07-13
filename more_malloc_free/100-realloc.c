#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _realloc - realloc memory
* @ptr: given pointer
* @old_size: old size
* @new_size: new size
* Return: return new size
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(sizeof(unsigned int) * new_size);
	}
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(sizeof(unsigned int) * new_size);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
