#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print an array with the given finction
 * @array: given array
 * @size: givan array size
 * @action: given print function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
