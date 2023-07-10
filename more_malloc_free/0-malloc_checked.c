#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - assign memory
 * @b: given size
 * Return: memory adress
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
