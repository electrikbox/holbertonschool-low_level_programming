#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _realloc - realloc memory
* @ptr: given pointer
* @old_size: old size
* @new_size: new size
* Return: return new size
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size <= old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, old_size);

	free(ptr);

	return (new_ptr);
}
